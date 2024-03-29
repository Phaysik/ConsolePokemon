/*! \file text.cpp
    \brief C++ file for rendering text.
    \details Contains the function definition for rendering text
    \date 08/12/2023
    \version 1.0
    \author Matthew Moore
*/

#include "opengl/text.h"

/* Constructors and Destructors */

Text::Text(const us width, const us height)
{
    // load and configure shader
    this->textShader = ResourceManager::loadShader(TEXT_VERTEX_SOURCE.c_str(), TEXT_FRAGMENT_SOURCE.c_str(), nullptr, "text");
    this->textShader.setMat4("projection", glm::ortho(0.0f, static_cast<float>(width), static_cast<float>(height), 0.0f), true);
    this->textShader.setInteger("text", 0);

    // configure VAO/VBO for texture quads
    glGenVertexArrays(1, &this->VAO);
    glGenBuffers(1, &this->VBO);
    glBindVertexArray(this->VAO);
    glBindBuffer(GL_ARRAY_BUFFER, this->VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float) * 6 * 4, NULL, GL_DYNAMIC_DRAW);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, 4 * sizeof(float), nullptr);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
}

/* Member Functions */

void Text::load(const std::string &font, const us fontSize)
{
    // first clear the previously loaded Characters
    this->characters.clear();

    // then initialize and load the FreeType library
    FT_Library ft;
    if (FT_Init_FreeType(&ft)) // all functions return a value different than 0 whenever an error occurred
        std::cout << "ERROR::FREETYPE: Could not init FreeType Library" << std::endl;

    // load font as face
    FT_Face face;
    if (FT_New_Face(ft, font.c_str(), 0, &face))
        std::cout << "ERROR::FREETYPE: Failed to load font" << std::endl;

    // set size to load glyphs as
    FT_Set_Pixel_Sizes(face, 0, fontSize);

    // disable byte-alignment restriction
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

    // then for the first 128 ASCII characters, pre-load/compile their characters and store them
    for (GLubyte c = 0; c < 128; c++) // lol see what I did there
    {
        // load character glyph
        if (FT_Load_Char(face, c, FT_LOAD_RENDER))
        {
            std::cout << "ERROR::FREETYTPE: Failed to load Glyph" << std::endl;
            continue;
        }

        // generate texture
        unsigned int texture;
        glGenTextures(1, &texture);
        glBindTexture(GL_TEXTURE_2D, texture);
        glTexImage2D(
            GL_TEXTURE_2D,
            0,
            GL_RED,
            static_cast<int>(face->glyph->bitmap.width),
            static_cast<int>(face->glyph->bitmap.rows),
            0,
            GL_RED,
            GL_UNSIGNED_BYTE,
            face->glyph->bitmap.buffer);

        // set texture options
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

        // now store character for later use
        Character character = {
            texture,
            glm::ivec2(face->glyph->bitmap.width, face->glyph->bitmap.rows),
            glm::ivec2(face->glyph->bitmap_left, face->glyph->bitmap_top),
            static_cast<unsigned int>(face->glyph->advance.x)};

        characters.insert(std::pair<char, Character>(c, character));
    }

    glBindTexture(GL_TEXTURE_2D, 0);

    // destroy FreeType once we're finished
    FT_Done_Face(face);
    FT_Done_FreeType(ft);
}

void Text::renderText(const std::string &text, float x, const float y, const float scale, const glm::vec3 &color)
{
    // activate corresponding render state
    this->textShader.Use();
    this->textShader.setVec3f("textColor", color);

    glActiveTexture(GL_TEXTURE0);
    glBindVertexArray(this->VAO);

    // iterate through all characters
    std::string::const_iterator c;
    for (c = text.begin(); c != text.end(); c++)
    {
        Character ch = characters[*c];

        float xpos = x + static_cast<float>(ch.Bearing.x) * scale;
        float ypos = y + static_cast<float>((this->characters['H'].Bearing.y - ch.Bearing.y)) * scale;

        float w = static_cast<float>(ch.Size.x) * scale;
        float h = static_cast<float>(ch.Size.y) * scale;
        // update VBO for each character
        float vertices[6][4] = {
            {xpos, ypos + h, 0.0f, 1.0f},
            {xpos + w, ypos, 1.0f, 0.0f},
            {xpos, ypos, 0.0f, 0.0f},

            {xpos, ypos + h, 0.0f, 1.0f},
            {xpos + w, ypos + h, 1.0f, 1.0f},
            {xpos + w, ypos, 1.0f, 0.0f}};

        // render glyph texture over quad
        glBindTexture(GL_TEXTURE_2D, ch.TextureID);

        // update content of VBO memory
        glBindBuffer(GL_ARRAY_BUFFER, this->VBO);
        glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(vertices), vertices); // be sure to use glBufferSubData and not glBufferData
        glBindBuffer(GL_ARRAY_BUFFER, 0);

        // render quad
        glDrawArrays(GL_TRIANGLES, 0, 6);

        // now advance cursors for next glyph
        x += static_cast<float>(ch.Advance >> 6) * scale; // bitshift by 6 to get value in pixels (1/64th times 2^6 = 64)
    }

    glBindVertexArray(0);
    glBindTexture(GL_TEXTURE_2D, 0);
}
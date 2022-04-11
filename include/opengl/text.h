/*! \file text.h
    \brief Header file for redering text.
    \details Contains the function declarations for rendering text.
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <iostream>
#include <map>
#include <stdexcept>

#include <glad/glad.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <ft2build.h>
#include FT_FREETYPE_H

#include "constants.h"
#include "opengl/shader.h"
#include "opengl/resourceManager.h"

/*! \headerfile text.h
    \brief Character information
    \details Holds all state information relevant to a character as loaded using FreeType.
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/
struct Character
{
    unsigned int TextureID; /*!< The texture ID of the character. */
    glm::ivec2 Size;        /*!< The size of the glyph. */
    glm::ivec2 Bearing;     /*!< The offset from the baseline to the left/top of the glyph. */
    unsigned int Advance;   /*!< The offset to advance to the next glyph. */
};

/*! \headerfile text.h
    \brief Text class
    \details For rendering text to the OpenGL window
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/
class Text
{
public:
    /* Constructors and Destructors */

    /*! \brief Construct the text renderer object
        \post #textShader will be initialized.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    Text(unsigned int width, unsigned int height);

    /* Helper Functions */

    /*! \brief Pre compile a list of characters from the given font.
        \param font The font to render.
        \param fontSize The size of the font.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void load(std::string font, unsigned int fontSize);

    /*! \brief Render a string of text
        \post Text will be rendered on the window
        \param text The text to render
        \param x The x position to render the text
        \param y The y position to render the text
        \param scale The scale of the the text
        \param color The color of the text
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void renderText(std::string text, float x, float y, float scale, glm::vec3 color = glm::vec3(1.0f));

private:
    Shader textShader;                      /*!< Shader for rendering text */
    std::map<GLchar, Character> characters; /*!< Map of characters */
    unsigned int VAO, VBO;                  /*!< Vertex Array index and Vertex Buffer index */
};
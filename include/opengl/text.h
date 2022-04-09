/*! \file text.h
    \brief Header file for redering text.
    \details Contains the function declarations for rendering text.
    \date 04/09/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <iostream>
#include <map>
#include <string>
#include <stdexcept>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <ft2build.h>
#include FT_FREETYPE_H

#include "opengl/shader.h"
#include "constants.h"

/*! \headerfile text.h
    \brief Character information
    \details Holds all state information relevant to a character as loaded using FreeType.
    \date 04/08/2022
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
    \date 04/08/2022
    \version 1.0
    \author Matthew Moore
*/
class Text
{
public:
    /* Constructors and Destructors */

    /*! \brief Construct the text renderer object
        \post #shader will be initialized.
        \date 04/09/2022
        \version 1.0
        \author Matthew Moore
    */
    Text();

    /*! \brief Delete #shader
        \pre #shader must be initialized
        \post #shader will be freed
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    ~Text();

    /* Getters */

    /*! \brief Get the shader for drawing text.
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    Shader *getShader() const;

    /* Helper Functions */

    /*! \brief Render a string of text
        \pre shader must be initialized
        \post Text will be rendered on the window
        \param shader The shader to use for rendering
        \param text The text to render
        \param x The x position to render the text
        \param y The y position to render the text
        \param scale The scale of the the text
        \param color The color of the text
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void renderText(Shader &shader, std::string text, float x, float y, float scale, glm::vec3 color);

private:
    Shader *textShader;                     /*!< Shader for rendering text */
    std::map<GLchar, Character> characters; /*!< Map of characters */
    unsigned int VAO, VBO;                  /*!< Vertex Array index and Vertex Buffer index */

    /* Helper Functions */

    /*! \brief Load characters into #characters.
        \post #characters will have first 128 characters of ASCII set.
        \param face The font face to load characters from.
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void loadCharacters(FT_Face &face);

    /*! \brief Confgure VAO/VBO for texture quads.
        \post #VAO and #VBO will be changed.
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void configureVAOVBO();
};
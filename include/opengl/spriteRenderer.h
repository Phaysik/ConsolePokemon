/*! \file spriteRenderer.h
    \brief Header file for sprite rendering.
    \details Contains the function declarations for sprite rendering
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "subTexture.h"
#include "texture.h"
#include "shader.h"

class SpriteRenderer
{
public:
    /* Constructors and Destructors */

    /*! \brief Inits shaders/shapes.
        \post #shader is initialized
        \param shader The shader to use for rendering
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    SpriteRenderer(Shader &shader);

    /*! \brief Delete vertex array.
        \post VertexArray bounded by #quadVAO is deleted
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    ~SpriteRenderer();

    /* Helper Functions */

    // Renders a defined quad textured with given sprite

    /*! \brief Renders a defined quad textuerd with given sprite.
        \pre texture must be initialized.
        \post A sprite is drawn
        \param texture The texture to draw
        \param position The position to draw the texture to
        \param size The size of the texture
        \param rotate The rotation of the texture
        \param color The color of the texture
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void DrawSprite(Texture2D &texture, glm::vec2 position, glm::vec2 size = glm::vec2(10.0f, 10.0f), float rotate = 0.0f, glm::vec3 color = glm::vec3(1.0f));

    void DrawSprite(SubTexture2D &subTexture, glm::vec2 position, glm::vec2 size = glm::vec2(10.0f, 10.0f), float rotate = 0.0f, glm::vec3 color = glm::vec3(1.0f));

private:
    Shader spriteShader;  /*!< The shader to use for rendering */
    unsigned int quadVAO; /*!< The vertex array to use for rendering */

    /* Helper Functions */

    void render(const Texture2D &texture, glm::vec2 position, glm::vec2 size, float rotate, glm::vec3 color);

    /*! \brief Initializes and configures the quad's buffer and vertex attributes
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void initRenderData(const glm::vec4 *texCoords);
};
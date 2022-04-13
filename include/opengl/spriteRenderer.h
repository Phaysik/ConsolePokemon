/*! \file spriteRenderer.h
    \brief Header file for sprite rendering.
    \details Contains the function declarations for sprite rendering
    \date 04/12/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "opengl/texture/subTexture.h"
#include "opengl/texture/texture.h"
#include "opengl/shader.h"

class SpriteRenderer
{
public:
    /* Constructors and Destructors */

    /*! \brief Inits shaders/shapes.
        \post #shader is initialized
        \param shader[in] The shader to use for rendering
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    SpriteRenderer(const Shader &shader);

    /*! \brief Delete vertex array.
        \post VertexArray bounded by #quadVAO is deleted
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    ~SpriteRenderer();

    /* Helper Functions */

    /*! \brief Renders a defined quad texture with given sprite.
        \pre texture must be initialized.
        \post A sprite is drawn
        \param texture[in] The texture to draw
        \param position[in] The position to draw the texture to
        \param size[in] The size of the texture
        \param rotate[in] The rotation of the texture
        \param color[in] The color of the texture
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void DrawSprite(const Texture2D &texture, const glm::vec2 &position, const glm::vec2 &size = glm::vec2(10.0f, 10.0f), const float rotate = 0.0f, const glm::vec3 &color = glm::vec3(1.0f));

    /*! \brief Renders a subtexture of a defined quad texture with given sprite.
        \pre texture must be initialized.
        \post A sprite is drawn
        \param subTexture[in] The texture to draw
        \param position[in] The position to draw the texture to
        \param size[in] The size of the texture
        \param rotate[in] The rotation of the texture
        \param color[in] The color of the texture
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void DrawSprite(const SubTexture2D &subTexture, const glm::vec2 &position, const glm::vec2 &size = glm::vec2(10.0f, 10.0f), const float rotate = 0.0f, const glm::vec3 &color = glm::vec3(1.0f));

private:
    Shader spriteShader; /*!< The shader to use for rendering */
    GLuint quadVAO;      /*!< The vertex array to use for rendering */

    /* Helper Functions */

    /*! \brief For rendering a texture.
        \pre textxure must be initialized.
        \post A texture is rendered.
        \param texture[in] The texture to draw
        \param position[in] The position to draw the texture to
        \param size[in] The size of the texture
        \param rotate[in] The rotation of the texture
        \param color[in] The color of the texture
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void render(const Texture2D &texture, const glm::vec2 &position, const glm::vec2 &size, const float rotate, const glm::vec3 &color);

    /*! \brief Initializes and configures the quad's buffer and vertex attributes
        \param texCoords[in] The texture coordinates to use
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void initRenderData(const glm::vec4 *texCoords);
};
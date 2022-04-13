/*! \file spriteRenderer.cpp
    \brief C++ file for spriteRenderer.
    \details Contains the function definition for spriteRenderer
    \date 04/12/2022
    \version 1.0
    \author Matthew Moore
*/

#include "opengl/spriteRenderer.h"

/* Constructors and Destructors */

SpriteRenderer::SpriteRenderer(const Shader &shader)
{
    this->spriteShader = shader;
}

SpriteRenderer::~SpriteRenderer()
{
    glDeleteVertexArrays(1, &this->quadVAO);
}

/* Helper Functions */

void SpriteRenderer::DrawSprite(const Texture2D &texture, const glm::vec2 &position, const glm::vec2 &size, const float rotate, const glm::vec3 &color)
{
    this->initRenderData(texture.getVertices());

    this->render(texture, position, size, rotate, color);
}

void SpriteRenderer::DrawSprite(const SubTexture2D &subTexture, const glm::vec2 &position, const glm::vec2 &size, const float rotate, const glm::vec3 &color)
{
    this->initRenderData(subTexture.getTexCoords());

    this->render(subTexture.getTexture(), position, size, rotate, color);
}

void SpriteRenderer::render(const Texture2D &texture, const glm::vec2 &position, const glm::vec2 &size, const float rotate, const glm::vec3 &color)
{
    // prepare transformations
    this->spriteShader.Use();
    glm::mat4 model = glm::mat4(1.0f);
    model = glm::translate(model, glm::vec3(position, 0.0f)); // first translate (transformations are: scale happens first, then rotation, and then final translation happens; reversed order)

    model = glm::translate(model, glm::vec3(0.5f * size.x, 0.5f * size.y, 0.0f)); // move origin of rotation to center of quad

    model = glm::rotate(model, glm::radians(rotate), glm::vec3(0.0f, 0.0f, 1.0f)); // then rotate

    model = glm::translate(model, glm::vec3(-0.5f * size.x, -0.5f * size.y, 0.0f)); // move origin back

    model = glm::scale(model, glm::vec3(size, 1.0f)); // last scale

    this->spriteShader.setMat4("model", model);

    // render textured quad
    this->spriteShader.setVec3f("spriteColor", color);

    glActiveTexture(GL_TEXTURE0);
    texture.bind();

    glBindVertexArray(this->quadVAO);
    glDrawArrays(GL_TRIANGLES, 0, 6);
    glBindVertexArray(0);
}

void SpriteRenderer::initRenderData(const glm::vec4 *texCoords)
{
    // configure VAO/VBO
    GLuint VBO;

    glGenVertexArrays(1, &this->quadVAO);
    glGenBuffers(1, &VBO);

    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, 96, texCoords, GL_STATIC_DRAW);

    glBindVertexArray(this->quadVAO);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, 4 * sizeof(float), (void *)0);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
}
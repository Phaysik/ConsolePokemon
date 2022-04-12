/*! \file subTexture.cpp
    \brief C++ file for subTexture.
    \details Contains the function definition for subTexture
    \date 04/12/2022
    \version 1.0
    \author Matthew Moore
*/

#include "opengl/subTexture.h"

SubTexture2D::SubTexture2D(const Texture2D &texture, const glm::vec2 &min, const glm::vec2 &max)
    : subTexture(texture)
{
    texCoords[0] = {min.x, max.y, min.x, max.y};
    texCoords[1] = {max.x, min.y, max.x, min.y};
    texCoords[2] = {min.x, min.y, min.x, min.y};
    texCoords[3] = {min.x, max.y, min.x, max.y};
    texCoords[4] = {max.x, max.y, max.x, max.y};
    texCoords[5] = {max.x, min.y, max.x, min.y};
}

const Texture2D SubTexture2D::getTexture() const
{
    return this->subTexture;
}

const glm::vec4 *SubTexture2D::getTexCoords() const
{
    return this->texCoords;
}

SubTexture2D SubTexture2D::createFromCoords(const Texture2D &texture, const glm::vec2 &coords, const glm::vec2 &spriteSheet)
{
    glm::vec2 min = {(coords.x * spriteSheet.x) / 2560.0f, (coords.y * spriteSheet.y) / 1664.0f};

    glm::vec2 max = {((coords.x + 1) * spriteSheet.x) / 2560.0f, ((coords.y + 1) * spriteSheet.y) / 1664.0f};

    return SubTexture2D(texture, min, max);
}
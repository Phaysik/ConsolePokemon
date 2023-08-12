/*! \file subTexture.cpp
    \brief C++ file for subTexture.
    \details Contains the function definition for subTexture
    \date 08/11/2023
    \version 1.0
    \author Matthew Moore
*/

#include "opengl/texture/subTexture.h"

/* Constructors and Destructors */

SubTexture2D::SubTexture2D(const Texture2D &texture, const glm::vec2 &min, const glm::vec2 &max, const glm::vec2 &zeroPosCoords)
    : subTexture(texture)
{
    texCoords[0] = {0.0F, zeroPosCoords.y, min.x, max.y};
    texCoords[1] = {zeroPosCoords.x, 0.0f, max.x, min.y};
    texCoords[2] = {0.0F, 0.0f, min.x, min.y};
    texCoords[3] = {0.0F, zeroPosCoords.y, min.x, max.y};
    texCoords[4] = {zeroPosCoords.x, zeroPosCoords.y, max.x, max.y};
    texCoords[5] = {zeroPosCoords.x, 0.0F, max.x, min.y};
}

/* Getters */

const Texture2D SubTexture2D::getTexture() const
{
    return this->subTexture;
}

const glm::vec4 *SubTexture2D::getTexCoords() const
{
    return this->texCoords;
}

/* Member Functions */

SubTexture2D SubTexture2D::createFromCoords(const Texture2D &texture, const glm::vec2 &coords, const glm::vec2 &cellSize, const glm::vec2 &spriteSize)
{
    glm::vec2 min = {(coords.y * cellSize.x) / texture.getImageWidth(), (coords.x * cellSize.y) / texture.getImageHeight()};

    glm::vec2 max = {((coords.y + spriteSize.y) * cellSize.x) / texture.getImageWidth(), ((coords.x + spriteSize.x) * cellSize.y) / texture.getImageHeight()};

    glm::vec2 zeroPosCoords = {(spriteSize.x * cellSize.x) / texture.getImageWidth(), (spriteSize.y * cellSize.y) / texture.getImageHeight()};

    return {texture, min, max, zeroPosCoords};
}
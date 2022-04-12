/*! \file subTexture.h
    \brief Header file for creating sub textures.
    \details Contains the function declarations for creating sub textures.
    \date 04/12/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <glm/glm.hpp>

#include "opengl/texture.h"

class SubTexture2D
{
public:
    SubTexture2D(const Texture2D &texture, const glm::vec2 &min, const glm::vec2 &max);

    const Texture2D getTexture() const;

    const glm::vec4 *getTexCoords() const;

    static SubTexture2D createFromCoords(const Texture2D &texture, const glm::vec2 &coords, const glm::vec2 &cellSize, const glm::vec2 &spriteSize = {1, 1});

private:
    Texture2D subTexture;
    glm::vec4 texCoords[6];
};
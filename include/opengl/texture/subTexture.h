/*! \file subTexture.h
    \brief Header file for creating sub textures.
    \details Contains the function declarations for creating sub textures.
    \date 03/27/2023
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <glm/glm.hpp>

#include "opengl/texture/texture.h"

/*! \headerfile subTexture.h
    \brief Create a sub texture from a sprite sheet.
    \date 03/27/2023
    \version 1.0
    \author Matthew Moore
*/
class SubTexture2D
{
public:
    /* Constructors and Destructors */
    /*! \brief Initialize #texCoords and #subTexture.
        \param texture[in] The sprite sheet to get sub textures from.
        \param min[in] The x, y location of the lower bound of the sub texture.
        \param max[in] The x, y location of the upper bound of the sub texture.
        \param zeroPosCoords[in] The location to (0, 0) a sub texture.
        \date 03/27/2023
        \version 1.0
        \author Matthew Moore
    */
    SubTexture2D(const Texture2D &texture, const glm::vec2 &min, const glm::vec2 &max, const glm::vec2 &zeroPosCoords);

    /* Getters */

    /*! \brief Get the sprite sheet.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return Texture2D The sprite sheet.
    */
    const Texture2D getTexture() const;

    /*! \brief Get the sub texture coordinates.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return glm::vec4 The sub texture coordinates.
    */
    const glm::vec4 *getTexCoords() const;

    /* Helper Functions */

    /*! \brief Create the sub texture coordinates from a sprite sheet.
        \param texture[in] The sprite sheet.
        \param coords[in] The x, y location of the sub texture to get.
        \param cellSize[in] The width, height of the size of each individual sprite in the sprite sheet.
        \param spriteSize[in] The width, height of the desired amount of cells to display from the sprite sheet.
        \date 03/27/2023
        \version 1.0
        \author Matthew Moore
        \return SubTexture2D The sub texture information.
    */
    static SubTexture2D createFromCoords(const Texture2D &texture, const glm::vec2 &coords, const glm::vec2 &cellSize, const glm::vec2 &spriteSize = {1, 1});

private:
    Texture2D subTexture;   /*!< The sprite sheet */
    glm::vec4 texCoords[6]; /*!< The texture coordinate for the sub texture */
};
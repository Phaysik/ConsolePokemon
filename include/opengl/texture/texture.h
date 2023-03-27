/*! \file texture.h
    \brief Header file for creating 2D textures.
    \details Contains the function declarations for creating 2D textures
    \date 03/27/2023
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <iostream>
#include <cstdint>

#include <glad/glad.h>
#include <glm/glm.hpp>

using us = u_int16_t; /*!< Shorthand for unsigned short */
using uc = u_char;    /*!< Shorthand for unsigned char */

/*! \headerfile texture.h
    \brief Creates 2D textures.
    \date 03/27/2023
    \version 1.0
    \author Matthew Moore
*/
class Texture2D
{
public:
    /* Constructors and Destructors */

    /*! \brief Sets default texture modes.
        \date 03/27/2023
        \version 1.0
        \author Matthew Moore
    */
    Texture2D();

    /* Getters */

    /*! \brief Returns the vertices of the texture.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return glm::vec4 The width of the texture.
    */
    const glm::vec4 *getVertices() const;

    /*! \brief Get the texture id.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return GLuint The ID of the texture
    */
    GLuint getTextureID() const;

    /*! \brief Returns the internal format of the texture.
        \date 03/27/2023
        \version 1.0
        \author Matthew Moore
        \return GLuint The internal format of the texture.
    */
    GLuint getInternalFormat() const;

    /*! \brief Returns the image format of the texture.
        \date 03/27/2023
        \version 1.0
        \author Matthew Moore
        \return GLuint The image format of the texture.
    */
    GLuint getImageFormat() const;

    /*! \brief Returns the width of the image.
        \date 03/27/2023
        \version 1.0
        \author Matthew Moore
        \return float The width of the image
    */
    float getImageWidth() const;

    /*! \brief Returns the height of the image.
        \date 03/27/2023
        \version 1.0
        \author Matthew Moore
        \return float The height of the image
    */
    float getImageHeight() const;

    /* Setters */

    /*! \brief Set the internal format of the texture.
        \param format The internal format of the texture.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void setInternalFormat(const GLuint format);

    /*! \brief Set the image format of the texture.
        \param format The image format of the texture.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void setImageFormat(const GLuint format);

    /* Helper Functions */

    /*! \brief Generates texture from image data.
        \post Creates and loads a texture.
        \param imageWidth[in] Width of the image
        \param imageHeight[in] Height of the image
        \param data[in] Image data
        \date 03/27/2023
        \version 1.0
        \author Matthew Moore
    */
    void generate(const us imageWidth, const us imageHeight, uc *data);

    /*! \brief Binds the texture as the current active GL_TEXTURE_2D texture object.
        \post The texture is bounded
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void bind() const;

private:
    GLuint ID; /*!< The textures's ID */

    us width;  /*!< The texture's width */
    us height; /*!< The texture's height */

    GLuint internalFormat; /*!< format of texture object */
    GLuint imageFormat;    /*!< format of loaded image */

    us wrapS;     /*!< wrapping mode on S axis */
    us wrapT;     /*!< wrapping mode on T axis */
    us filterMin; /*!< filtering mode if texture pixels < screen pixels */

    us filterMax; /*!< filtering mode if texture pixels > screen pixels */

    glm::vec4 vertices[6]; /*!< The vertices of the texture */
};
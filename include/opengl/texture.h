/*! \file texture.h
    \brief Header file for creating 2D textures.
    \details Contains the function declarations for creating 2D textures
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <iostream>

#include <glad/glad.h>
#include <glm/glm.hpp>

/*! \headerfile texture.h
    \brief Creates 2D textures.
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/
class Texture2D
{
public:
    unsigned int ID; /*!< The textures's ID */

    unsigned int Width;  /*!< The texture's width */
    unsigned int Height; /*!< The texture's height */

    unsigned int Internal_Format; /*!< format of texture object */
    unsigned int Image_Format;    /*!< format of loaded image */

    unsigned int Wrap_S;     /*!< wrapping mode on S axis */
    unsigned int Wrap_T;     /*!< wrapping mode on T axis */
    unsigned int Filter_Min; /*!< filtering mode if texture pixels < screen pixels */

    unsigned int Filter_Max; /*!< filtering mode if texture pixels > screen pixels */

    glm::vec4 vertices[6];

    /* Constructors and Destructors */

    /*! \brief Sets default texture modes.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    Texture2D();

    /* Helper Functions */

    /*! \brief Generates texture from image data.
        \post Creates and loads a texture.
        \param width Width of the image
        \param height Height of the image
        \param data Image data
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void Generate(unsigned int width, unsigned int height, unsigned char *data);

    /*! \brief Binds the texture as the current active GL_TEXTURE_2D texture object.
        \post The texture is bounded
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void Bind() const;
};
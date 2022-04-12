/*! \file texture.cpp
    \brief C++ file for texture.
    \details Contains the function definition for texture
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/

#include "opengl/texture.h"

/* Constructors and Destructors */

Texture2D::Texture2D()
    : Width(0), Height(0), Internal_Format(GL_RGB), Image_Format(GL_RGB), Wrap_S(GL_REPEAT), Wrap_T(GL_REPEAT), Filter_Min(GL_LINEAR), Filter_Max(GL_LINEAR)
{
    this->vertices[0] = {0.0f, 1.0f, 0.0f, 1.0f};
    this->vertices[1] = {1.0f, 0.0f, 1.0f, 0.0f};
    this->vertices[2] = {0.0f, 0.0f, 0.0f, 0.0f};
    this->vertices[3] = {0.0f, 1.0f, 0.0f, 1.0f};
    this->vertices[4] = {1.0f, 1.0f, 1.0f, 1.0f};
    this->vertices[5] = {1.0f, 0.0f, 1.0f, 0.0f};

    glGenTextures(1, &this->ID);
}

/* Helper Functions */

void Texture2D::Generate(unsigned int width, unsigned int height, unsigned char *data)
{
    this->Width = width;
    this->Height = height;

    // create Texture
    glBindTexture(GL_TEXTURE_2D, this->ID);
    glTexImage2D(GL_TEXTURE_2D, 0, static_cast<GLsizei>(this->Internal_Format), static_cast<GLsizei>(width), static_cast<GLsizei>(height), 0, this->Image_Format, GL_UNSIGNED_BYTE, data);

    // set Texture wrap and filter modes
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, static_cast<GLint>(this->Wrap_S));
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, static_cast<GLint>(this->Wrap_T));
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, static_cast<GLint>(this->Filter_Min));
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, static_cast<GLint>(this->Filter_Max));

    // unbind texture
    glBindTexture(GL_TEXTURE_2D, 0);
}

void Texture2D::Bind() const
{
    glBindTexture(GL_TEXTURE_2D, this->ID);
}
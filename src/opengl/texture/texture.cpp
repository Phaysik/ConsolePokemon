/*! \file texture.cpp
    \brief C++ file for texture.
    \details Contains the function definition for texture
    \date 08/11/2023
    \version 1.0
    \author Matthew Moore
*/

#include "opengl/texture/texture.h"

/* Constructors and Destructors */

Texture2D::Texture2D()
    : width(0), height(0), internalFormat(GL_RGB), imageFormat(GL_RGB), wrapS(GL_REPEAT), wrapT(GL_REPEAT), filterMin(GL_LINEAR), filterMax(GL_LINEAR)
{
    this->vertices[0] = {0.0f, 1.0f, 0.0f, 1.0f};
    this->vertices[1] = {1.0f, 0.0f, 1.0f, 0.0f};
    this->vertices[2] = {0.0f, 0.0f, 0.0f, 0.0f};
    this->vertices[3] = {0.0f, 1.0f, 0.0f, 1.0f};
    this->vertices[4] = {1.0f, 1.0f, 1.0f, 1.0f};
    this->vertices[5] = {1.0f, 0.0f, 1.0f, 0.0f};

    glGenTextures(1, &this->ID);
}

/* Getters */

const glm::vec4 *Texture2D::getVertices() const
{
    return this->vertices;
}

GLuint Texture2D::getTextureID() const
{
    return this->ID;
}

GLuint Texture2D::getInternalFormat() const
{
    return this->internalFormat;
}

GLuint Texture2D::getImageFormat() const
{
    return this->imageFormat;
}

float Texture2D::getImageWidth() const
{
    return static_cast<float>(this->width);
}

float Texture2D::getImageHeight() const
{
    return static_cast<float>(this->height);
}

/* Setters */

void Texture2D::setInternalFormat(const GLuint format)
{
    this->internalFormat = format;
}

void Texture2D::setImageFormat(const GLuint format)
{
    this->imageFormat = format;
}

/* Member Functions */

void Texture2D::generate(const us imageWidth, const us imageHeight, ub *data)
{
    this->width = imageWidth;
    this->height = imageHeight;

    // create Texture
    glBindTexture(GL_TEXTURE_2D, this->ID);
    glTexImage2D(GL_TEXTURE_2D, 0, static_cast<GLsizei>(this->internalFormat), static_cast<GLsizei>(imageWidth), static_cast<GLsizei>(imageHeight), 0, this->imageFormat, GL_UNSIGNED_BYTE, data);

    // set Texture wrap and filter modes
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, static_cast<GLint>(this->wrapS));
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, static_cast<GLint>(this->wrapT));
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, static_cast<GLint>(this->filterMin));
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, static_cast<GLint>(this->filterMax));

    // unbind texture
    glBindTexture(GL_TEXTURE_2D, 0);
}

void Texture2D::bind() const
{
    glBindTexture(GL_TEXTURE_2D, this->ID);
}
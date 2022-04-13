/*! \file resourceManager.cpp
    \brief C++ file for resourceManager.
    \details Contains the function definition for resourceManager
    \date 04/12/2022
    \version 1.0
    \author Matthew Moore
*/

#include "opengl/resourceManager.h"

// Instantiate static variables
std::map<std::string, Shader> ResourceManager::Shaders;
std::map<std::string, Texture2D> ResourceManager::Textures;

/* Getters */

Texture2D ResourceManager::getTexture(const std::string &name)
{
    return Textures[name];
}

Shader ResourceManager::getShader(const std::string &name)
{
    return Shaders[name];
}

/* Helper Functions */

Texture2D ResourceManager::loadTexture(const char *file, const bool alpha, const std::string &name)
{
    Textures[name] = loadTextureFromFile(file, alpha);
    return Textures[name];
}

Shader ResourceManager::loadShader(const char *vShaderFile, const char *fShaderFile, const char *gShaderFile, const std::string &name)
{
    Shaders[name] = loadShaderFromFile(vShaderFile, fShaderFile, gShaderFile);
    return Shaders[name];
}

void ResourceManager::clear()
{
    // (properly) delete all shaders
    for (auto iter : Shaders)
        glDeleteProgram(iter.second.getShaderID());

    // (properly) delete all textures
    for (auto iter : Textures)
    {
        GLuint id = iter.second.getTextureID();
        glDeleteTextures(1, &id);
    }
}

Texture2D ResourceManager::loadTextureFromFile(const char *file, const bool alpha)
{
    // create texture object
    Texture2D texture;
    if (alpha)
    {
        texture.setInternalFormat(GL_RGBA);
        texture.setImageFormat(GL_RGBA);
    }

    // load image
    int width, height, nrChannels;
    unsigned char *data = stbi_load(file, &width, &height, &nrChannels, 0);

    // now generate texture
    texture.generate(static_cast<us>(width), static_cast<us>(height), data);

    // and finally free image data
    stbi_image_free(data);

    return texture;
}

Shader ResourceManager::loadShaderFromFile(const char *vShaderFile, const char *fShaderFile, const char *gShaderFile)
{
    // 1. retrieve the vertex/fragment source code from filePath
    std::string vertexCode;
    std::string fragmentCode;
    std::string geometryCode;

    try
    {
        // open files
        std::ifstream vertexShaderFile(vShaderFile);
        std::ifstream fragmentShaderFile(fShaderFile);
        std::stringstream vShaderStream, fShaderStream;

        // read file's buffer contents into streams
        vShaderStream << vertexShaderFile.rdbuf();
        fShaderStream << fragmentShaderFile.rdbuf();

        // close file handlers
        vertexShaderFile.close();
        fragmentShaderFile.close();

        // convert stream into string
        vertexCode = vShaderStream.str();
        fragmentCode = fShaderStream.str();

        // if geometry shader path is present, also load a geometry shader
        if (gShaderFile != nullptr)
        {
            std::ifstream geometryShaderFile(gShaderFile);
            std::stringstream gShaderStream;
            gShaderStream << geometryShaderFile.rdbuf();
            geometryShaderFile.close();
            geometryCode = gShaderStream.str();
        }
    }
    catch (std::ifstream::failure &e)
    {
        std::cout << "ERROR::SHADER: Failed to read shader files" << e.what() << std::endl;
    }

    const char *vShaderCode = vertexCode.c_str();
    const char *fShaderCode = fragmentCode.c_str();
    const char *gShaderCode = geometryCode.c_str();

    // 2. now create shader object from source code
    Shader shader;
    shader.Compile(vShaderCode, fShaderCode, gShaderFile != nullptr ? gShaderCode : nullptr);

    return shader;
}
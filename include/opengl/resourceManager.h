/*! \file resourceManager.h
    \brief Header file for managing all OpenGL resources.
    \details Contains the function declarations for a resource manager.
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <map>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

#include <glad/glad.h>

#include "stb_image.h"

#include "texture.h"
#include "shader.h"

class ResourceManager
{
public:
    static std::map<std::string, Shader> Shaders;     /*!< A dictionary of Shaders to use in the program */
    static std::map<std::string, Texture2D> Textures; /*!< A dictionary of Textures to use in the program */

    /* Getters */

    /*! \brief Retrieves a stored texture.
        \param name Name of the stored texture
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
        \return Texture2D
    */
    static Texture2D GetTexture(std::string name);

    /*! \brief Get a shader.
        \pre Name must be a shader name already loaded.
        \post A shader is returned
        \param name The name of the shader
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
        \return Shader
    */
    static Shader GetShader(std::string name);

    /* Helper Functions */

    /*! \brief Loads a texture into memory.
        \post A texture is loaded into memory.
        \param file Location of the texture file.
        \param alpha Whether the texture uses alpha values.
        \param name Name of the texture.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
        \return Texture2D
    */
    static Texture2D LoadTexture(const char *file, bool alpha, std::string name);

    /*! \brief Loads a shader into memory.
        \post A shader is loaded into memory.
        \param vShaderFile Vertex shader file location
        \param fShaderFile Fragment shader file location
        \param gShaderFile Geometry shader file location
        \param name Name of the shader
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
        \return Shader
    */
    static Shader LoadShader(const char *vShaderFile, const char *fShaderFile, const char *gShaderFile, std::string name);

    /*! \brief Deallocates all loaded resources
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    static void Clear();

private:
    /*! \brief Private constructor.
        \details Do not want any actual resource manager objects.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    ResourceManager() {}

    /* Helper Functions */

    /*! \brief Loads a single texture from file.
        \param file Location of the texture file.
        \param alpha Whether the texture uses alpha values.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
        \return Texture2D
    */
    static Texture2D loadTextureFromFile(const char *file, bool alpha);

    /*! \brief Loads and generates a shader from file
        \param vShaderFile Vertex shader file location
        \param fShaderFile Fragment shader file location
        \param gShaderFile Geometry shader file location
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    static Shader loadShaderFromFile(const char *vShaderFile, const char *fShaderFile, const char *gShaderFile = nullptr);
};
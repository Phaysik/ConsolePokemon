/*! \file resourceManager.h
    \brief Header file for managing all OpenGL resources.
    \details Contains the function declarations for a resource manager.
    \date 08/11/2023
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

#include "aliases.h"
#include "opengl/texture/texture.h"
#include "opengl/shader.h"

/*! \headerfile resourceManager.h
    \brief A manager for OpenGL resources
    \details A manager that handles OpenGL Shader and Texture resources
    \date 08/05/2023
    \version 1.0
    \author Matthew Moore
*/
class ResourceManager
{
public:
    static std::map<std::string, Shader> Shaders;     /*!< A dictionary of Shaders to use in the program */
    static std::map<std::string, Texture2D> Textures; /*!< A dictionary of Textures to use in the program */

    /* Getters */

    /*! \brief Retrieves a stored texture.
        \param name[in] Name of the stored texture
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return Texture2D A texture stored in the dictionary
    */
    static Texture2D getTexture(const std::string &name);

    /*! \brief Get a shader.
        \pre Name must be a shader name already loaded.
        \post A shader is returned
        \param name[in] The name of the shader
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return Shader A shader stored in the dictionary
    */
    static Shader getShader(const std::string &name);

    /* Member Functions */

    /*! \brief Loads a texture into memory.
        \post A texture is loaded into memory.
        \param file[in] Location of the texture file.
        \param alpha[in] Whether the texture uses alpha values.
        \param name[in] Name of the texture.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return Texture2D A texture from the file param.
    */
    static Texture2D loadTexture(const char *file, const bool alpha, const std::string &name);

    /*! \brief Loads a shader into memory.
        \post A shader is loaded into memory.
        \param vShaderFile[in] Vertex shader file location
        \param fShaderFile[in] Fragment shader file location
        \param gShaderFile[in] Geometry shader file location
        \param name[in] Name of the shader
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return Shader A shader from the vShaderFile, fShaderFile, and gShaderFile param.
    */
    static Shader loadShader(const char *vShaderFile, const char *fShaderFile, const char *gShaderFile, const std::string &name);

    /*! \brief Deallocates all loaded resources
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    static void clear();

private:
    /*! \brief Private constructor.
        \details Do not want any actual resource manager objects.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    ResourceManager() {}

    /* Member Functions */

    /*! \brief Loads a single texture from file.
        \param file[in] Location of the texture file.
        \param alpha[in] Whether the texture uses alpha values.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return Texture2D A texture from the file param.
    */
    static Texture2D loadTextureFromFile(const char *file, const bool alpha);

    /*! \brief Loads and generates a shader from file
        \param vShaderFile[in] Vertex shader file location
        \param fShaderFile[in] Fragment shader file location
        \param gShaderFile[in] Geometry shader file location
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return Shader A shader from the vShaderFile, fShaderFile, and gShaderFile param.
    */
    static Shader loadShaderFromFile(const char *vShaderFile, const char *fShaderFile, const char *gShaderFile = nullptr);
};
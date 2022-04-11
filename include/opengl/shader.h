/*! \file shader.h
    \brief Header file for creating shaders.
    \details Contains the function declarations for Shaders.
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <glad/glad.h>
#include <glm/glm.hpp>

/*! \headerfile shader.h
    \brief Shader class.
    \details For creating shaders.
    \date 04/08/2022
    \version 1.0
    \author Matthew Moore
*/
class Shader
{
public:
    /* Constructors and Destructors */

    /*! \brief Generates a shader on the fly.
        \post A shader using the filePaths are created.
        \param vertexPath Path to the vertex shader.
        \param fragmentPath Path to the fragment shader.
        \param geometryPath Path to the geometry shader.
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    Shader(const char *vertexPath, const char *fragmentPath, const char *geometryPath = nullptr);

    /* Getters */

    /*! \brief Get shader id
        \pre Shader must already be created.
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
        \return unsigned int
    */
    unsigned int getID() const;

    /* Setters */

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform
        \param value The value of the uniform
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void setBool(const std::string &name, bool value) const;

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform
        \param value The value of the uniform
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void setInt(const std::string &name, int value) const;

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform
        \param value The value of the uniform
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void setFloat(const std::string &name, float value) const;

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform
        \param value The value of the uniform
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec2(const std::string &name, const glm::vec2 &value) const;

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform
        \param value The value of the uniform
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec2(const std::string &name, float x, float y) const;

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform
        \param value The value of the uniform
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec3(const std::string &name, const glm::vec3 &value) const;

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform
        \param value The value of the uniform
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec3(const std::string &name, float x, float y, float z) const;

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform
        \param value The value of the uniform
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec4(const std::string &name, const glm::vec4 &value) const;

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform
        \param value The value of the uniform
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec4(const std::string &name, float x, float y, float z, float w);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform
        \param value The value of the uniform
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void setMat2(const std::string &name, const glm::mat2 &mat) const;

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform
        \param value The value of the uniform
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void setMat3(const std::string &name, const glm::mat3 &mat) const;

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform
        \param value The value of the uniform
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void setMat4(const std::string &name, const glm::mat4 &mat) const;

    /* Helper Functions */

    /*! \brief Use the shader
        \pre The shader must be created
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void use();

private:
    unsigned int ID;

    /*! \brief Check errors
        \details Check shader compilation/linking errors
        \param shader The shader to check
        \param type The shader error type
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void checkCompileErrors(GLuint shader, std::string type);
};
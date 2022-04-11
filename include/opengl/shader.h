/*! \file shader.h
    \brief Header file for creating shaders.
    \details Contains the function declarations for Shaders.
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <string>
#include <iostream>

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

/*! \headerfile shader.h
    \brief Shader class.
    \details For creating shaders.
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/
class Shader
{
public:
    unsigned int ID; /*!< The shader's ID */

    /* Constructors and Destructors */

    /*! \brief Creates a Shader object.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    Shader(){};

    /* Setters */

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform.
        \param value The value of the uniform.
        \param useShader Whether or not to use the shader.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void setInteger(const char *name, int value, bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform.
        \param value The value of the uniform.
        \param useShader Whether or not to use the shader.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void setFloat(const char *name, float value, bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform.
        \param value The value of the uniform.
        \param useShader Whether or not to use the shader.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec2f(const char *name, const glm::vec2 &value, bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform.
        \param value The value of the uniform.
        \param useShader Whether or not to use the shader.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec2f(const char *name, float x, float y, bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform.
        \param value The value of the uniform.
        \param useShader Whether or not to use the shader.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec3f(const char *name, const glm::vec3 &value, bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform.
        \param value The value of the uniform.
        \param useShader Whether or not to use the shader.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec3f(const char *name, float x, float y, float z, bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform.
        \param value The value of the uniform.
        \param useShader Whether or not to use the shader.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec4f(const char *name, const glm::vec4 &value, bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform.
        \param value The value of the uniform.
        \param useShader Whether or not to use the shader.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec4f(const char *name, float x, float y, float z, float w, bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name The name of the uniform.
        \param value The value of the uniform.
        \param useShader Whether or not to use the shader.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void setMat4(const char *name, const glm::mat4 &mat, bool useShader = false);

    /* Helper Functions */

    /*! \brief Use the shader and return it.
        \pre Shader must be intialized.
        \post Shader will be used.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
        \return Shader
    */
    Shader &Use();

    /*! \brief Compile the shader.
        \param vertexSource C-string of vertex shader source.
        \param fragmentSource C-string of fragment shader source.
        \param geometrySource C-string of geometry shader source.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void Compile(const char *vertexSource, const char *fragmentSource, const char *geometrySource = nullptr);

private:
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
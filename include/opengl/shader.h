/*! \file shader.h
    \brief Header file for creating shaders.
    \details Contains the function declarations for Shaders.
    \date 08/11/2023
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <string>
#include <iostream>
#include <cstdint>

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "aliases.h"

/*! \headerfile shader.h
    \brief Shader class.
    \details For creating shaders.
    \date 08/05/2023
    \version 1.0
    \author Matthew Moore
*/
class Shader
{
public:
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
        \param name[in] The name of the uniform.
        \param value[in] The value of the uniform.
        \param useShader[in] Whether or not to use the shader.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void setInteger(const GLchar *name, const us value, const bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name[in] The name of the uniform.
        \param value[in] The value of the uniform.
        \param useShader[in] Whether or not to use the shader.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void setFloat(const GLchar *name, const float value, const bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name[in] The name of the uniform.
        \param value[in] The value of the uniform.
        \param useShader[in] Whether or not to use the shader.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec2f(const GLchar *name, const glm::vec2 &value, const bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name[in] The name of the uniform.
        \param value[in] The value of the uniform.
        \param useShader[in] Whether or not to use the shader.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec2f(const GLchar *name, const float x, const float y, const bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name[in] The name of the uniform.
        \param value[in] The value of the uniform.
        \param useShader[in] Whether or not to use the shader.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec3f(const GLchar *name, const glm::vec3 &value, const bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name[in] The name of the uniform.
        \param value[in] The value of the uniform.
        \param useShader[in] Whether or not to use the shader.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec3f(const GLchar *name, const float x, const float y, const float z, const bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name[in] The name of the uniform.
        \param value[in] The value of the uniform.
        \param useShader[in] Whether or not to use the shader.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec4f(const GLchar *name, const glm::vec4 &value, const bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name[in] The name of the uniform.
        \param value[in] The value of the uniform.
        \param useShader[in] Whether or not to use the shader.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void setVec4f(const GLchar *name, const float x, const float y, const float z, const float w, const bool useShader = false);

    /*! \brief Uniform setter
        \pre The shader must be created and in use.
        \post The uniform is changed.
        \param name[in] The name of the uniform.
        \param value[in] The value of the uniform.
        \param useShader[in] Whether or not to use the shader.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void setMat4(const GLchar *name, const glm::mat4 &mat, const bool useShader = false);

    /* Getters */

    /*! \brief Get the shader ID.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return GLuint The shader ID.
    */
    GLuint getShaderID() const;

    /* Member Functions */

    /*! \brief Use the shader and return it.
        \pre Shader must be intialized.
        \post Shader will be used.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
        \return Shader A reference to the shader.
    */
    Shader &Use();

    /*! \brief Compile the shader.
        \param vertexSource[in] C-string of vertex shader source.
        \param fragmentSource[in] C-string of fragment shader source.
        \param geometrySource[in] C-string of geometry shader source.
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void Compile(const GLchar *vertexSource, const GLchar *fragmentSource, const GLchar *geometrySource = nullptr);

private:
    GLuint ID; /*!< The shader's ID */

    /*! \brief Check errors
        \details Check shader compilation/linking errors
        \param shader[in] The shader to check
        \param type[in] The shader error type
        \date 04/12/2022
        \version 1.0
        \author Matthew Moore
    */
    void checkCompileErrors(const GLuint shader, const std::string &type);
};
/*! \file shader.cpp
    \brief C++ file for shader.
    \details Contains the function definition for shader
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/

#include "opengl/shader.h"

/* Setters */

void Shader::setFloat(const char *name, float value, bool useShader)
{
    if (useShader)
        this->Use();

    glUniform1f(glGetUniformLocation(this->ID, name), value);
}
void Shader::setInteger(const char *name, int value, bool useShader)
{
    if (useShader)
        this->Use();

    glUniform1i(glGetUniformLocation(this->ID, name), value);
}
void Shader::setVec2f(const char *name, float x, float y, bool useShader)
{
    if (useShader)
        this->Use();

    glUniform2f(glGetUniformLocation(this->ID, name), x, y);
}
void Shader::setVec2f(const char *name, const glm::vec2 &value, bool useShader)
{
    if (useShader)
        this->Use();

    glUniform2f(glGetUniformLocation(this->ID, name), value.x, value.y);
}
void Shader::setVec3f(const char *name, float x, float y, float z, bool useShader)
{
    if (useShader)
        this->Use();

    glUniform3f(glGetUniformLocation(this->ID, name), x, y, z);
}
void Shader::setVec3f(const char *name, const glm::vec3 &value, bool useShader)
{
    if (useShader)
        this->Use();

    glUniform3f(glGetUniformLocation(this->ID, name), value.x, value.y, value.z);
}
void Shader::setVec4f(const char *name, float x, float y, float z, float w, bool useShader)
{
    if (useShader)
        this->Use();

    glUniform4f(glGetUniformLocation(this->ID, name), x, y, z, w);
}
void Shader::setVec4f(const char *name, const glm::vec4 &value, bool useShader)
{
    if (useShader)
        this->Use();

    glUniform4f(glGetUniformLocation(this->ID, name), value.x, value.y, value.z, value.w);
}
void Shader::setMat4(const char *name, const glm::mat4 &matrix, bool useShader)
{
    if (useShader)
        this->Use();

    glUniformMatrix4fv(glGetUniformLocation(this->ID, name), 1, false, glm::value_ptr(matrix));
}

/* Helper Functions */

Shader &Shader::Use()
{
    glUseProgram(this->ID);

    return *this;
}

void Shader::Compile(const char *vertexSource, const char *fragmentSource, const char *geometrySource)
{
    unsigned int sVertex, sFragment, gShader = 0;

    // vertex Shader
    sVertex = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(sVertex, 1, &vertexSource, NULL);
    glCompileShader(sVertex);
    checkCompileErrors(sVertex, "VERTEX");

    // fragment Shader
    sFragment = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(sFragment, 1, &fragmentSource, NULL);
    glCompileShader(sFragment);
    checkCompileErrors(sFragment, "FRAGMENT");

    // if geometry shader source code is given, also compile geometry shader
    if (geometrySource != nullptr)
    {
        gShader = glCreateShader(GL_GEOMETRY_SHADER);
        glShaderSource(gShader, 1, &geometrySource, NULL);
        glCompileShader(gShader);
        checkCompileErrors(gShader, "GEOMETRY");
    }

    // shader program
    this->ID = glCreateProgram();

    glAttachShader(this->ID, sVertex);
    glAttachShader(this->ID, sFragment);

    if (geometrySource != nullptr)
        glAttachShader(this->ID, gShader);

    glLinkProgram(this->ID);
    checkCompileErrors(this->ID, "PROGRAM");

    // delete the shaders as they're linked into our program now and no longer necessary
    glDeleteShader(sVertex);
    glDeleteShader(sFragment);

    if (geometrySource != nullptr)
        glDeleteShader(gShader);
}

void Shader::checkCompileErrors(GLuint shader, std::string type)
{
    GLint success;
    GLchar infoLog[1024];

    if (type != "PROGRAM")
    {
        glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
        if (!success)
        {
            glGetShaderInfoLog(shader, 1024, NULL, infoLog);
            std::cout << "ERROR::SHADER_COMPILATION_ERROR of type: " << type << "\n"
                      << infoLog << "\n -- --------------------------------------------------- -- " << std::endl;
        }
    }
    else
    {
        glGetProgramiv(shader, GL_LINK_STATUS, &success);
        if (!success)
        {
            glGetProgramInfoLog(shader, 1024, NULL, infoLog);
            std::cout << "ERROR::PROGRAM_LINKING_ERROR of type: " << type << "\n"
                      << infoLog << "\n -- --------------------------------------------------- -- " << std::endl;
        }
    }
}
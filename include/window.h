/*! \file window.h
    \brief Header file for OpenGL initialization.
    \details Contains the function declarations for OpenGL.
    \date 04/08/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <cstdint>
#include "constants.h"
#include <iostream>

using us = uint16_t;

/*! \headerfile window.h
    \brief Creates OpenGL context.
    \details Create the OpenGL window and set up OpenGL functionality.
    \date 04/08/2022
    \version 1.0
    \author Matthew Moore
*/
class GLInfo
{
public:
    /* Constructors and Descructors */

    /*! \brief Initialize OpenGL.
        \details Create and OpenGL window and set up OpenGL.
        \post #window will be initialized.
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    GLInfo();

    /*! \brief Terminate OpenGL
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    ~GLInfo();

    /* Getters */

    /*! \brief Get the OpenGL window.
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
        \return GLFWwindow.
    */
    GLFWwindow *getWindow() const;

    /* Helper Functions */

    /*! \brief Destory the OpenGL window.
        \post #window will be freed.
        \date 04/08/2022
        \version 1.0
        \author Matthew Moore
    */
    void destroyWindow();

private:
    GLFWwindow *window;    /*!< For creating an OpenGL window */
    int framebufferWidth;  /*!< Width of the frame buffer */
    int framebufferHeight; /*!< Height of the frame buffer */
};
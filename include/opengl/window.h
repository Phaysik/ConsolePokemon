/*! \file window.h
    \brief Header file for OpenGL initialization.
    \details Contains the function declarations for OpenGL.
    \date 04/09/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <cstdint>
#include <iostream>
#include <stdexcept>

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "constants.h"
#include "opengl/shader.h"
#include "opengl/text.h"

using us = uint16_t;

/*! \brief For resizing the window.
    \pre #window must be initialized.
    \post #window will be resized.
    \param window The window being resized.
    \param width The window's new width.
    \param height The window's new height.
    \date 04/08/2022
    \version 1.0
    \author Matthew Moore
*/
void frameBufferResize(GLFWwindow *window, int width, int height);

/*! \headerfile window.h
    \brief Creates OpenGL context.
    \details Create the OpenGL window and set up OpenGL functionality.
    \date 04/09/2022
    \version 1.0
    \author Matthew Moore
*/
class Window
{
public:
    /* Constructors and Descructors */

    /*! \brief Initialize OpenGL.
        \details Create and OpenGL window and set up OpenGL.
        \post #window will be initialized.
        \date 04/09/2022
        \version 1.0
        \author Matthew Moore
    */
    Window();

    /*! \brief Terminate OpenGL
        \date 04/09/2022
        \version 1.0
        \author Matthew Moore
    */
    ~Window();

    /* Getters */

    /*! \brief Get the OpenGL window.
        \date 04/09/2022
        \version 1.0
        \author Matthew Moore
        \return GLFWwindow.
    */
    GLFWwindow *getWindow() const;

    /*! \brief Get the Text object
        \details Get the object for rendering text.
        \date 04/09/2022
        \version 1.0
        \author Matthew Moore
    */
    Text *getText();

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
    Text *text;            /*!< For rendering text */
};
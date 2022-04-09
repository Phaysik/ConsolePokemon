/*! \file window.cpp
    \brief C++ file for window.
    \details Contains the function definition for window
    \date 04/09/2022
    \version 1.0
    \author Matthew Moore
*/

#include "opengl/window.h"

/* Constructors and Destructors */

Window::Window()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    // glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // MAC OS

    this->window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Pokemon Info", NULL, NULL);

    if (this->window == NULL)
    {
        glfwTerminate();
    }

    glfwMakeContextCurrent(window); // IMPORTANT!!
    // glfwSetFramebufferSizeCallback(window, frameBufferResize);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        glfwTerminate();
    }

    // OpenGL state
    glEnable(GL_CULL_FACE);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    this->text = new Text();

    // IF YOU WANT TO RESIZE THE WINDOW
    // glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);

    // glfwGetFramebufferSize(window, &framebufferWidth, &framebufferHeight);
}

Window::~Window()
{
    delete this->text;

    // END OF PROGRAM
    glfwTerminate();
}

/* Getters */

GLFWwindow *Window::getWindow() const
{
    return this->window;
}

Text *Window::getText()
{
    return this->text;
}

/* Helper Functions */

void Window::destroyWindow()
{
    glfwDestroyWindow(this->window);
}

void frameBufferResize(GLFWwindow *window, int width, int height)
{
    glViewport(0, 0, width, height);
}

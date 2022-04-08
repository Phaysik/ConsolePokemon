/*! \file window.cpp
    \brief C++ file for window.
    \details Contains the function definition for window
    \date 04/08/2022
    \version 1.0
    \author Matthew Moore
*/

#include "window.h"

/* Constructors and Destructors */

GLInfo::GLInfo()
{
    glfwInit();

    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    // Run glxinfo -B and check Max core profile version to see what numbers to put here
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
    // glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // MAC OS

    this->window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Pokemon Info", NULL, NULL);

    bool failed = false;

    if (this->window == NULL)
    {
        fprintf(stderr, "Failed to create a GLFW window");
        failed = true;
    }

    if (failed)
        glfwTerminate();
    else
    {
        // IF YOU WANT TO RESIZE THE WINDOW
        // glfwSetFramebufferSizeCallback(window, framebufferResize);

        glfwGetFramebufferSize(window, &framebufferWidth, &framebufferHeight);
        glViewport(0, 0, framebufferWidth, framebufferHeight);

        glfwMakeContextCurrent(window); // IMPORTANT!!

        // INIT GLEW (NEEDS WINDOW AND OPENGL CONTEXT)
        glewExperimental = GL_TRUE;

        // Error checking
        if (glewInit() != GLEW_OK)
        {
            std::cout << "ERROR::MAIN.CPP::GLEW_INIT_FAILED" << std::endl;
            glfwTerminate();
        }
    }
}

GLInfo::~GLInfo()
{
    // END OF PROGRAM
    glfwTerminate();
}

/* Getters */

GLFWwindow *GLInfo::getWindow() const
{
    return this->window;
}

/* Helper Functions */

void GLInfo::destroyWindow()
{
    glfwDestroyWindow(this->window);
}

/*! \file main.cpp
    \brief Main
    \date 12/23/2021
    \version 1.0
    \author Matthew Moore
*/

#include <game.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main()
{
    glfwInit();

    // CREATE WINDOW
    const uint16_t WINDOW_WIDTH = 640;
    const uint16_t WINDOW_HEIGHT = 480;
    int framebufferWidth = 0;
    int framebufferHeight = 0;

    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    // Run glxinfo -B and check Max core profile version to see what numbers to put here
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
    // glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // MAC OS

    GLFWwindow *window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Pokemon Info", NULL, NULL);

    if (window == NULL)
    {
        fprintf(stderr, "Failed to create a GLFW window");
        glfwTerminate();
        return -1;
    }

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

    Game game;

    // MAIN LOOP
    while (!glfwWindowShouldClose(window))
    {
        // UPDATE INPUT
        glfwPollEvents();

        // END DRAW
        glfwSwapBuffers(window);
        glFlush();
    }

    // END OF PROGRAM
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
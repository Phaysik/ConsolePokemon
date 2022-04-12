/*! \file game.h
    \brief Header file for Game.
    \details Contains the function declarations for Game information
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <thread>
#include <ncurses.h>
#include <string>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "constants.h"
#include "opengl/resourceManager.h"
#include "opengl/shader.h"
#include "opengl/texture.h"
#include "opengl/subTexture.h"
#include "opengl/spriteRenderer.h"
#include "opengl/text.h"
#include "output/display.h"
#include "output/colors.h"
#include "trainer/trainer.h"
#include "trainer/pokemon/pokemon.h"
#include "trainer/pokemon/stats/stats.h"
#include "trainer/pokemon/moves/moves.h"
#include "types/typeEnums.h"

/*! \brief Make sure the viewport matches the new window dimensions
    \param window The GLFW window to resize
    \param width The width of the GLFW window
    \param height The height of the window
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/
void framebuffer_size_callback(GLFWwindow *window, int width, int height);

/*! \headerfile game.h
    \brief The game
    \details Creates the properties of a Game and the functions that will affect it.
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/
class Game
{
public:
    /* Constructors and Destructors */

    /*! \brief Construct ncurses window and keyboard functionality
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    Game();

    /*! \brief Deallocate ncurses window
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    ~Game();

    /* Helper functions */

    /*! \brief For testing functionality
        \date 12/22/2021
        \version 1.0
        \author Matthew Moore
    */
    void testing();

    /*! \brief Start OpenGL window
        \pre The OpenGL window must be initialized.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void startWindow();

private:
    Display display;                /*!< For displaying text */
    ColoredText *colorText;         /*!< For displaying text in color */
    std::thread thread;             /*!< For threading the console portion of the application */
    GLFWwindow *window;             /*!< For creating a OpenGL window */
    SpriteRenderer *spriteRenderer; /*!< For rendering sprites */
    Text *textRenderer;             /*!< For displaying text */

    /* Helper Functions */

    /*! \brief Initialize Ncurses information
        \post Ncurses will be initialized.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void initNcurses();

    /*! \brief Initalize OpenGL information
        \post #window, #text will be initialized.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void initOpenGL();
};
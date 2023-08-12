/*! \file game.h
    \brief Header file for Game.
    \details Contains the function declarations for Game information
    \date 08/11/2023
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <thread>
#include <ncurses.h>
#include <string>
#include <memory>
#include <array>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "constants.h"
#include "aliases.h"
#include "opengl/resourceManager.h"
#include "opengl/texture/texture.h"
#include "opengl/texture/subTexture.h"
#include "opengl/shader.h"
#include "opengl/spriteRenderer.h"
#include "opengl/text.h"
#include "output/display.h"
#include "output/colors.h"
#include "trainer/trainer.h"
#include "trainer/pokemon/pokemon.h"
#include "trainer/pokemon/stats/stats.h"
#include "trainer/pokemon/moves/moves.h"
#include "types/typeEnums.h"
#include "types/pokemonTypes.h"

/*! \brief Make sure the viewport matches the new window dimensions
    \param window[in, out] The GLFW window to resize
    \param width[in] The width of the GLFW window
    \param height[in] The height of the window
    \date 08/05/2023
    \version 1.0
    \author Matthew Moore
*/
void frameBufferResize(GLFWwindow *window, int width, int height);

/*! \headerfile game.h
    \brief The game
    \details Creates the properties of a Game and the functions that will affect it.
    \date 08/11/2023
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

    /* Member functions */

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
    Display display;                                /*!< For displaying text */
    ColoredText colorText;                          /*!< For displaying text in color */
    std::thread thread;                             /*!< For threading the console portion of the application */
    GLFWwindow *window;                             /*!< For creating a OpenGL window */
    std::unique_ptr<SpriteRenderer> spriteRenderer; /*!< For rendering sprites */
    std::unique_ptr<Text> textRenderer;             /*!< For displaying text */

    /* Member Functions */

    /*! \brief Initialize Ncurses information
        \post Ncurses will be initialized.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    static void initNcurses();

    /*! \brief Initalize OpenGL information
        \post #window, #text will be initialized.
        \date 04/11/2022
        \version 1.0
        \author Matthew Moore
    */
    void initOpenGL();
};
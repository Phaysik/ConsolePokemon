/*! \file constants.h
    \brief Header file for global constants.
    \date 04/11/2022
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <cstdint>
#include <string>

#include "types/typeEnums.h"

using us = uint16_t; /*!< Shorthand for unsigned short */

// For Pokemon constants
const us MAX_POKEMON = 5;
const us MAX_MOVES = 4;

// Battle constants
const BattleType BATTLETYPE = BattleType::Quintuple;

// For GLWindow constants
const us WINDOW_WIDTH = 640;
const us WINDOW_HEIGHT = 480;

// For Text constants
const std::string TEXTFILE = "resources/fonts/Inconsolata.ttf";
const us FONTSIZE = 24;
const std::string TEXTVERTEXSOURCE = "resources/shaders/text.vert";
const std::string TEXTFRAGMENTSOURCE = "resources/shaders/text.frag";
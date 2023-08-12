/*! \file constants.h
    \brief Header file for global constants.
    \date 08/12/2023
    \version 1.0
    \author Matthew Moore
*/

#pragma once

#include <string>

#include "aliases.h"
#include "types/typeEnums.h"

// For Pokemon constants
const us MAX_POKEMON = 5;
const us MAX_MOVES = 4;

// Battle constants
const BattleType BATTLETYPE = BattleType::Quintuple;

// For GLWindow constants
const us WINDOW_WIDTH = 640;
const us WINDOW_HEIGHT = 480;

// For Text constants
const std::string TEXT_FILE = "resources/fonts/Inconsolata.ttf";
const us FONT_SIZE = 24;
const std::string TEXT_VERTEX_SOURCE = "resources/shaders/text.vert";
const std::string TEXT_FRAGMENT_SOURCE = "resources/shaders/text.frag";

// For Type Effectiveness constants
const std::string TYPE_MATCH_UP_FILE = "resources/text/typechart.txt";
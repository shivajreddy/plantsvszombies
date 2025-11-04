#pragma once

#include <string>

// GAME CONSTANTS
inline const char* GAME_NAME = "Plants Vs Zombies";
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 800;
const int GAME_FPS = 60;

// Global State Variables
extern bool game_is_running;
extern std::string status_msg;

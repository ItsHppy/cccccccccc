#pragma once
#include "SFML/Graphics.hpp"

const float WINDOW_WIDTH = 800;
const float WINDOW_HEIGHT = 800;
const std::string WINDOW_TITLE = "SFML Space Shooter P33122";
const float FPS = 60.f;

const std::string PLAYER_FILE_NAME = "images\\orangeship.png";
const sf::Vector2f PLAYER_START_POS{ WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2 };
const float PLAYER_SPEED = 10.f;
const int METEOR_TYPES_QTY = 8;
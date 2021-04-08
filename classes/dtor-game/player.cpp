#include "player.h"
#include <iostream>

Player::Player(int x)
{
    points = x;
    points %= 5;
}

Player::~Player() {
    std::cout << "Remaining points = " << points << std::endl;
}
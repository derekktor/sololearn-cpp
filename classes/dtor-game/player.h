#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    int points;
    Player(int);
    //define the destructor
    ~Player();
};

Player::Player(int x)
{
    points = x;
    points %= 5;
}

Player::~Player()
{
    std::cout << "Remaining points = " << points << std::endl;
}

#endif
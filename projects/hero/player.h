#ifndef PLAYER_H
#define PLAYER_H

class Player
{
protected:
    int health;
    int attackDamage;
    int speed;
    std::string type;
    std::string name;

public:
    Player();
    Player(int, int, int);
    Player(std::string, std::string, int, int, int);
    ~Player();
    void printStats();
    void setHealth(int);
    void setAD(int);
    void setSpeed(int);
    void setType(std::string);
    void setName(std::string);
    int getHealth();
    int getAD();
    int getSpeed();
    std::string getName();
    virtual void attack(Player& obj) {};
};

Player::Player()
{
    std::cout << "Player created...\n";
    health = 100;
    attackDamage = 10;
    speed = 10;
}

Player::Player(int h, int ad, int s)
    : health(h), attackDamage(ad), speed(s)
{
    std::cout << "Player created...\n";
}

Player::Player(std::string t, std::string n, int h, int ad, int s)
    : health(h), attackDamage(ad), speed(s), type(t), name(n)
{
    std::cout << "Player created...\n";
}

Player::~Player()
{
    std::cout << "Player destroyed...\n";
}

void Player::printStats()
{
    std::cout << "\tHP : " << health << std::endl
              << "\tAD : " << attackDamage << std::endl
              << "\tSpeed : " << speed << std::endl << std::endl;
}

void Player::setHealth(int x)
{
    health -= x;
}

void Player::setAD(int x)
{
    attackDamage -= x;
}

void Player::setSpeed(int x)
{
    speed -= x;
}

void Player::setType(std::string a)
{
    type = a;
}

void Player::setName(std::string a)
{
    name = a;
}


int Player::getHealth()
{
    return health;
}

int Player::getAD()
{
    return attackDamage;
}

int Player::getSpeed()
{
    return speed;
}

std::string Player::getName()
{
    return name;
}

#endif
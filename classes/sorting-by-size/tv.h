#ifndef TELEVISION
#define TELEVISION

class Television
{
public:
    Television(int x, int y, std::string b);

private:
    const int width;
    const int height;
    const std::string brand;
};

#endif
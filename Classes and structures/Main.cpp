#include <iostream>

#define LOG(x) std::cout << x << std::endl

class Player
{
public:
    int x, y;
    int speed;

    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};


void Move(Player& player, int xa, int ya)       /////////////// Esto es otra manera de usar las clases//////////////////////////////////
{
    player.x += xa * player.speed;
    player.y += ya * player.speed;
}

int main()
{
    Player player;
    player.Move(2, 3);

    Move(player, 2, 3);                      /////////////// Esto es otra manera de usar las clases//////////////////////////////////

    std::cin.get();
}
#include <iostream>

#define LOG(x) std::cout << x << std::endl

struct Vect
{
    int x, y;

    void add(const Vect& other)
    {
        x += other.x;
        y += other.y;
    }
};

int main()
{


    std::cin.get();
}

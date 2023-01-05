#include <iostream>

struct Entity
{
    static int x, y;

    void Print()
    {
        std::cout << x << ", " << y << std::endl;
    }
};

int Entity::x;          /////////////// Se agregan cuando se usa static
int Entity::y;          /////////////// Se agregan cuando se usa static

int main()
{
    Entity e;       ///////// Se debe de modificar esto si se usa static a como esta debajo, ya que se manipula la variable
    e.x = 2;
    e.y = 3;
    
    // Entity e1 = {4, 5};   Esto es una manera de hacerlo sin usar static
    Entity e1;         ///////////////////////// Se usa asi cuando se agrega static
    Entity::x = 4;
    Entity::y = 5;
    
    e.Print();
    e1.Print();

    std::cin.get();

}
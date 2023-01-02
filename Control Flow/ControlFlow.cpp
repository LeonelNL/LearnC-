#include <iostream>

void Log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    for(int i = 0; i < 5; i++)
    {
        if(i > 3)
        {
            continue;
        }
        Log("Hello World");
        std::cout << i << std::endl;
    }
        for(int i = 0; i < 5; i++)
    {
        if(i > 3)
        {
            break;
        }
        Log("Hola Mundo");
        std::cout << i << std::endl;
    }
    return 0;
}
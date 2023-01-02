#include <iostream>

void Log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    for(uint8_t i = 0; i < 5; i++)
    {
        Log("Hello World");
    }

    uint8_t i = 0;
    for( ; i < 5; )
    {
        Log("Hola Mundo");
        i++;
    }
    
    uint8_t k = 0;
    bool conditional = true;

    for( ; conditional ; )
    {
        Log("Holaf");
        k++;
        if(!(k < 5))
        {
            conditional = false;
        }
    }
}
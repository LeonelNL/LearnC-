#include <iostream>
#include "Log.h"

int main()
{
    const char* ptr = "Hello";
    if(ptr)
    {
        Log("Hello World");
    }
    else if(ptr == "Hola")
    {
        Log("Ptr is Hola");
    }
    else 
    {
        Log("Ptr is null");   
    }
}
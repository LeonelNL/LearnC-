#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int& value)
{
    value++;
}

void IncrementPointer(int* value)
{
    (*value)++;
}

int main()
{
    int a = 5;
    int& ref =  a;
    ref = 2;

    LOG(ref);

    Increment(ref);
    LOG(ref);
    
    IncrementPointer(&ref);
    LOG(ref);

    std::cin.get();
}
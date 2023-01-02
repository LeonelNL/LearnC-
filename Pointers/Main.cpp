#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
    int var = 8;
    int* ptr = &var;
    *ptr = 10;
    LOG(var);

    char* buffer = new char[2];
    memset(buffer, 0, 2);

    delete[] buffer;

    std::cin.get();
}
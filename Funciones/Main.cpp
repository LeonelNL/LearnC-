#include <iostream>

int Multiply(int a, int b)
{
    return a * b;
}

void MultiplyAndLog(int a, int b)
{
    int result = a * b;
    std::cout << result << std::endl;
}

int main()
{
    MultiplyAndLog(2, 1);
    MultiplyAndLog(2, 2);
    MultiplyAndLog(2, 3);
    int resultado = Multiply(3, 2);
    std::cout << resultado << std::endl;
    std::cin.get();
} 
#include <iostream>

int readNumber()
{
    int a;
    std::cin >> a;
    return a;
}

void writeAnswer(int a, int b)
{
    std::cout << a + b << std::endl;
}
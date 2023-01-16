#include <iostream>

int add(int x, int y)
{
    return x + y;
}

void printResult(int z)
{
    std::cout << "The answer is: " << z << '\n';
}

int getUserInput()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    int x{getUserInput()};
    std::cerr << "main::x = " << x << '\n';
    int y{getUserInput()};
    std::cerr << "main::y = " << y << '\n';

    std::cout << x << " + " << y << '\n';

    int z{add(x, 5)};
    std::cerr << "main::z = " << z << '\n';
    printResult(z);

    return 0;
}
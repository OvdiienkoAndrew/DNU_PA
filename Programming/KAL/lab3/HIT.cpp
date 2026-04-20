#include <iostream>
#include <ctime>

int main()
{
    srand(time(nullptr));

    double x_0 = -5 + std::rand() % (5 - (-5) + 1), y_0 = -5 + std::rand() % (5 - (-5) + 1), R = 1 + std::rand() % (10 - 1 + 1), x = 0, y = 0;

    std::cout << "A(x; y) ?= (через пробіл напишіть: \'x y\') = ";
    std::cin >> x >> y;

    std::cout << "Точка (" << x << "; " << y << ")";
    if ((x_0 - x) * (x_0 - x) + (y_0 - y) * (y_0 - y) > R * R)
        std::cout << " не ";

    std::cout << " потрапляє в коло з центром в точці (" << x_0 << ", "
              << y_0 << ") радіуса " << R << ".\n";

    return 0;
}
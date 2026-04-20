#include <iostream>
#include <ctime>

int main()
{
    srand(time(nullptr));

    double x_0 = -5 + std::rand() % (5 - (-5) + 1), y_0 = -5 + std::rand() % (5 - (-5) + 1), R = 1 + std::rand() % (10 - 1 + 1), x = 0, y = 0, distance_in_sq = 0, last_distance_in_sq = 0;

    do
    {
        std::cout << "A(x; y) ?= (через пробіл напишіть: \'x y\') = ";
        std::cin >> x >> y;
        distance_in_sq = (x_0 - x) * (x_0 - x) + (y_0 - y) * (y_0 - y);

        if (last_distance_in_sq == 0)
        {
            if (distance_in_sq > R * R)
                std::cout << "Не попав!\n";
        }
        else
        {
            if (distance_in_sq > last_distance_in_sq)
                std::cout << "Не попав! Холодніше!\n";
            else if (distance_in_sq < last_distance_in_sq)
                std::cout << "Не попав! Тепліше!\n";
            else
                std::cout << "Не попав! Нічого не змінилося!\n";
        }
        last_distance_in_sq = distance_in_sq;
    } while (distance_in_sq > R * R);

    std::cout << "Точка (" << x << "; " << y << ") потрапляє в коло з центром в точці (" << x_0 << ", " << y_0 << ") радіуса " << R << ".\n";

    return 0;
}
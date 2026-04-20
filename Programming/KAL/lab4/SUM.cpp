#include <iostream>

int main()
{
    int sum = 0, temp = -1;
    std::cout << "Введіть послідовність цілих чисел. Нуль – ознака кінця.\n";
    for (int i = 1; temp != 0; i++)
    {
        std::cout << "a[" << i << "]=";
        std::cin >> temp;

        sum += temp;
    }
    std::cout << "SUM = " << sum << ".\n";

    return 0;
}
#include <iostream>

int main()
{
    int mul = 1, temp = 1;
    std::cout << "Введіть послідовність цілих чисел. Нуль – ознака кінця.\n";
    for (int i = 1; temp != 0; i++)
    {
        std::cout << "a[" << i << "]=";
        std::cin >> temp;

        if (temp % 2 == 0 && temp != 0)
        {
            mul *= temp;
        }
    }
    std::cout << "ДОБУТОК = " << mul << ".\n";

    return 0;
}
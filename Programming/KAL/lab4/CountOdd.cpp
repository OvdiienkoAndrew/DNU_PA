#include <iostream>

int main()
{
    int count = 0;
    std::cout << "Введіть послідовність цілих чисел. Нуль – ознака кінця.\n";
    for (int temp = 1; temp != 0;)
    {
        std::cout << "Введіть число = ";
        std::cin >> temp;

        if (temp % 2 == 1 && temp != 0)
            count++;
    }
    std::cout << "Зустрілося " << count << " непарних числа.\n";

    return 0;
}
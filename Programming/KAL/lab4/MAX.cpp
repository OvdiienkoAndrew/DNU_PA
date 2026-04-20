#include <iostream>

int main()
{
    int max = 0;
    std::cout << "Введіть послідовність цілих чисел. Нуль – ознака кінця.\n";
    for (int i = 1, temp = -1; temp != 0; i++)
    {
        std::cout << "a[" << i << "]=";
        std::cin >> temp;

        if (max == 0)
            max = temp;
        else if (max < temp && temp != 0)
            max = temp;
    }
    std::cout << "MAX = " << max << ".\n";

    return 0;
}
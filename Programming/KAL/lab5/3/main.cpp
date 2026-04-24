#include <iostream>

int main()
{
    long long int n = 0;
    do
    {
        std::cout << "n = ";
        std::cin >> n;
        if (!std::cin or n <= 0)
        {
            std::cerr << "\nПомилка: число n не є натуральним.\n";
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            continue;
        }
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        break;
    } while (true);
    std::cout << "Натуральні дільники " << n << ": ";

    // быстрее, но числа потом нужно сортировать.
    for (long long int i = 1; i * i <= n; i++)
        if (n % i == 0)
        {
            if (n / i != i)
                std::cout << i << ", " << n / i << ", ";
            else
                std::cout << i << ", ";
        }
    std::cout << "\b\b.\n";

    /* может быть чучуть долго но в правильной последовательности от меньшего к большему.
    for (long long int i = 1; i <= n; i++)
        if (n % i == 0)
            std::cout << i << ", ";
    std::cout << "\b\b.\n";
     */

    return 0;
}
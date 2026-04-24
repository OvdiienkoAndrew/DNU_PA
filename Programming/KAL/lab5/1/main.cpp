#include <iostream>

int main()
{
    long long int n = 0;
    long double max = 0.0, x = 0.0, sum = 0.0;

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

    while (true)
    {
        std::cout << "x[1] = ";
        std::cin >> x;
        if (!std::cin)
        {
            std::cerr << "\nПомилка: число x[1] не є дійсним.\n";
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            continue;
        }
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        break;
    }

    max = x;

    for (unsigned long long int i = 2; i <= n; i++)
    {
        do
        {
            std::cout << "x[" << i << "] = ";
            std::cin >> x;
            if (!std::cin)
            {
                std::cerr << "\nПомилка: число x[" << i << "] не є дійсним.\n";
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                continue;
            }
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            break;
        } while (true);

        if (max < x)
        {
            max = x;
        }
    }

    for (unsigned long long int i = n + 1; i <= 3 * n; i++)
    {
        do
        {
            std::cout << "x[" << i << "] = ";
            std::cin >> x;
            if (!std::cin)
            {
                std::cerr << "\nПомилка: число x[" << i << "] не є дійсним.\n";
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                continue;
            }
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            break;
        } while (true);

        if (max < x)
        {
            sum += x;
        }
    }

    std::cout << "Сума: " << sum << ".\n";

    return 0;
}
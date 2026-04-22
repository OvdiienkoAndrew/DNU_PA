#include <iostream>
#include <cmath>

double F(double x)
{
    if (x <= 0)
        return x - 1;
    else if (x <= 9)
        return 2 * x * x;
    else
        return log(abs(cos(x))) + log(abs(sin(x))) + 2 * x * exp(x) - 3.7;
}

int main(int argc, char *argv[])
{
    long double start = 0, end = 0, step = 0, temp = 0;

    if (argc == 4)
    {
        start = atof(argv[1]);
        end = atof(argv[2]);
        step = atof(argv[3]);

        if (start > end)
        {
            std::cerr << "Помилка: початок більший за кінець.\n";
            do
            {
                std::cout << "Введіть: початок, кінець.\n\nПочаток: ";
                std::cin >> start;
                while (!std::cin)
                {
                    std::cin.clear();
                    std::cin.ignore(32767, '\n');
                    std::cerr << "Помилка: введіть число.\n";
                    std::cout << "Початок: ";
                    std::cin >> start;
                }

                std::cout << "Кінець: ";
                std::cin >> end;
                while (!std::cin)
                {
                    std::cin.clear();
                    std::cin.ignore(32767, '\n');
                    std::cerr << "Помилка: введіть число.\n";
                    std::cout << "Кінець: ";
                    std::cin >> end;
                }

                if (start > end)
                    std::cerr << "Помилка: початок більший за кінець.\n";
            } while (start > end);
        }
        if (step <= 0)
        {
            std::cerr << "Помилка: крок не є додатнім.\n";
            goto steps;
        }
    }
    else
    {
        do
        {
            std::cout << "Введіть: початок, кінець, крок.\n\nПочаток: ";
            std::cin >> start;
            while (!std::cin)
            {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cerr << "Помилка: введіть число.\n";
                std::cout << "Початок: ";
                std::cin >> start;
            }

            std::cout << "Кінець: ";
            std::cin >> end;
            while (!std::cin)
            {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cerr << "Помилка: введіть число.\n";
                std::cout << "Кінець: ";
                std::cin >> end;
            }

            if (start > end)
                std::cerr << "Помилка: початок більший за кінець.\n";
        } while (start > end);

    steps:
        do
        {
            std::cout << "Крок: ";
            std::cin >> step;
            while (!std::cin)
            {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cerr << "Помилка: введіть число.\n";
                std::cout << "Крок: ";
                std::cin >> step;
            }
            if (step <= 0)
                std::cerr << "Помилка: крок не є додатнім.\n";

        } while (step <= 0);
    }
    if (start == end)
    {
        std::cout << "F(" << start << ") = " << F(start) << ".\n";
    }
    else
    {
        for (int i = 0, count = (end - start) / step + 0.5; i <= count; i++)
        {
            temp = start + i * step;

            if (i == count)
                temp = end;
            else if (std::abs(temp) < 1e-9)
                temp = 0.0;

            std::cout << "F(" << temp << ") = " << F(temp) << ".\n";
        }
    }

    return 0;
}
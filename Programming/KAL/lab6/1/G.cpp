#include <iostream>
#include <cmath>

/*
ОДЗ:
x-1!=0;
(x+1)/(x-1)>0;

Перепишемо у вигляді рівності другу нерівність.

x!=1;
{
(x+1)(x-1)=0;
}

Знайдемо корені рівняння.

x!=1;
{
(x+1)=0;
(x-1)=0;
}

Виразимо корені рівняння.

x!=1;
{
x=-1;
x=1;
}

Якщо х=0 => (x+1)(x-1)=(1)(-1)=-1<0 - і весь проміжок xє(-1; 1)
Якщо x=-2 => (x+1)(x-1)=(-2+1)(-2-1)=(-1)(-3)=3>0 - і весь проміжок xє(-нескінченність; -1)
Якщо x=2 =>(x+1)(x-1)=(2+1)(2-1)=(3)(1)=3>0 - і весь проміжок xє(1; нескінченність)

*/
long double my_abs(long double x)
{
    return (x >= 1e-15) ? x : -x;
}

long double
my_pow(long double x, long long int degree)
{
    long double result = x;
    for (int i = 1; i < degree; i++)
    {
        result *= x;
    }
    return result;
}

long double G_for_5(long double x)
{
    long double result = 0.0;

    for (int n = 0; n < 5; n++)
    {
        result += 1.0 / ((2 * n + 1) * my_pow(x, 2 * n + 1));
    }

    return 2 * result;
}

long double G_while_5(long double x)
{
    long double result = 0.0;
    int n = 0;

    while (n < 5)
    {
        result += 1.0 / ((2 * n + 1) * my_pow(x, 2 * n + 1));
        n++;
    }

    return 2 * result;
}

long double G_do_while_5(long double x)
{
    long double result = 0.0;
    int n = 0;

    do
    {
        result += 1.0 / ((2 * n + 1) * my_pow(x, 2 * n + 1));
        n++;
    } while (n < 5);

    return 2 * result;
}

long double G_for_n(long double x, long double eps, long long int &index)
{
    long double result = 0.0, last_result = eps;
    index = 0;

    for (long long int n = 0; my_abs(result - last_result) >= eps; n++, index++)
    {
        last_result = result;
        result += 1.0 / ((2 * n + 1) * my_pow(x, 2 * n + 1));
    }

    return 2 * result;
}

long double G_while_n(long double x, long double eps, long long int &index)
{
    long double result = 0.0, last_result = eps;
    long long int n = 0;
    index = 0;

    while (my_abs(result - last_result) >= eps)
    {
        last_result = result;
        result += 1.0 / ((2 * n + 1) * my_pow(x, 2 * n + 1));
        n++;
        index++;
    }

    return 2 * result;
}

long double G_do_while_n(long double x, long double eps, long long int &index)
{
    long double result = 0.0, last_result = eps;
    long long int n = 0;
    index = 0;

    do
    {
        last_result = result;
        result += 1.0 / ((2 * n + 1) * my_pow(x, 2 * n + 1));
        n++;
        index++;
    } while (my_abs(result - last_result) >= eps);

    return 2 * result;
}

int main(int argc, char *argv[])
{
    char choice = '\0';
    long double x = 0.00, eps = 0.00;
    long long int index = 0;
    do
    {
        std::cout << "\n\tМеню:\n\t\t0.Вихід.\n\t\t1.задати значення x.\n\t\t2.Задати точність ε.\n\t\t3.Власна реалізація.\n\t\t4.Вбудована реалізація.\n\nВведіть пункт меню: ";

        std::cin >> choice;

        switch (choice)
        {
        case '0':
            std::cout << "\n\n\nВихід...\n\n\n";
            break;
        case '1':
            while (true)
            {
                std::cout << "\n\n\nBведіть х: ";
                std::cin >> x;
                if (!std::cin)
                {
                    std::cin.clear();
                    std::cin.ignore(32767, '\n');
                    x = 0.00;
                    std::cerr << "\n\n\nПомилка: ви ввели не число.\n\n\n";
                    continue;
                }
                if (x >= -1 && x <= 1)
                {
                    std::cerr << "\n\n\nПомилка: ви ввели число в діапазоні x(-1;1).\n\n\n";
                    continue;
                }
                break;
            }
            break;

        case '2':
            while (true)
            {
                std::cout << "\n\n\nBведіть ε: ";
                std::cin >> eps;
                if (!std::cin)
                {
                    std::cin.clear();
                    std::cin.ignore(32767, '\n');
                    eps = 0.00;
                    std::cerr << "\n\n\nПомилка: ви ввели не число.\n\n\n";
                    continue;
                }
                if (eps <= 0)
                {
                    eps = 0.00;
                    std::cerr << "\n\n\nПомилка: ви ввели не позитивне ε.\n\n\n";
                    continue;
                }
                break;
            }
            break;

        case '3':
            if (eps <= 0)
            {
                eps = 0.00;
                std::cerr << "\n\n\nПомилка: ви ввели не позитивне ε.\n\n\n";
                break;
            }
            if (x >= -1 && x <= 1)
            {
                std::cerr << "\n\n\nПомилка: ви ввели число в діапазоні x(-1;1).\n\n\n";
                break;
            }
        restart:
            std::cout << "\n\n\nОбчислити суму перших пʼяти членів, чи повну суму ряду?(5/n)\n";
            std::cin >> choice;
            switch (choice)
            {
            case '5':
                choice = '\0';
                std::cout << "\n\n\nG(" << x << ") = " << G_for_5(x) << " - for().\n";
                std::cout << "G(" << x << ") = " << G_while_5(x) << " - while().\n";
                std::cout << "G(" << x << ") = " << G_do_while_5(x) << " - do{}while().\n\n\n";
                break;
            case 'n':
                choice = '\0';

                std::cout << "\n\n\nG(" << x << ") = " << G_for_n(x, eps, index) << "; ітерацій: " << index << " - for().\n";
                std::cout << "G(" << x << ") = " << G_while_n(x, eps, index) << "; ітерацій: " << index << " - while().\n";
                std::cout << "G(" << x << ") = " << G_do_while_n(x, eps, index) << "; ітерацій: " << index << " - do{}while().\n\n\n";
                break;
            default:
                choice = '\0';
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cerr << "\n\n\nПомилка: щось пішло не так.\n\n\n";
                goto restart;
            }

            break;

        case '4':
            if (x >= -1 && x <= 1)
            {
                std::cerr << "\n\n\nПомилка: ви ввели число в діапазоні x(-1;1).\n\n\n";
                break;
            }
            std::cout << "\n\n\nG(" << x << ") = " << log((x + 1) / (x - 1)) << ".\n\n\n";
            break;

        default:
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cerr << "\n\n\nПомилка: щось пішло не так.\n\n\n";
            break;
        }
    } while (choice != '0');

    return 0;
}
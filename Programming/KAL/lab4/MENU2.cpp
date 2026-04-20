#include <iostream>

int main()
{
    char choice = '0';
    do
    {
        std::cout << "\tМеню:\t\n";
        std::cout << "\t0.Вихід;\n";
        std::cout << "\t1.Новини дня;\n";
        std::cout << "\t2.Анекдот тижня;\n";
        std::cout << "\t3.Автора !!!\n\n";

        std::cin >> choice;

        switch (choice)
        {
        case '0':
            std::cout << "Вихід.\n\n";
            break;
        case '1':
            std::cout << "Моя мама приїхала до мене з псом!\n\n";
            break;
        case '2':
            std::cout << "Як уявиш собі: скільки дурниць у житті ще зробити належить - волосся дибки встає! Де стільки дурості набратись?\n\n";
            break;
        case '3':
            std::cout << "Автор chori-Chori\n\n";
            break;
        default:
            std::cout << "Something went wrong!\n\n";
            break;
        }

    } while (choice != '0');

    return 0;
}
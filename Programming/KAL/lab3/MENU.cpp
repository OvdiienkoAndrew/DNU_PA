#include <iostream>

int main()
{
    char choice = '0';

    std::cout << "\tМеню:\t\n";
    std::cout << "\t1.Новини дня;\n";
    std::cout << "\t2.Анекдот тижня;\n";
    std::cout << "\t3.Автора !!!\n\n";

    std::cin >> choice;

    switch (choice)
    {
    case '1':
        std::cout << "Вийшла нова серія Start Wars!\n\n";
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

    return 0;
}
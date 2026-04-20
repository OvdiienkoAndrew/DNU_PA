#include <iostream>

int main()
{
    int age = 0, size = 256;
    char name[size], education[size];

    for (int i = 0; i < size; i++)
    {
        name[i] = '\0';
        education[i] = '\0';
    }

    std::cout << "Як Вас звуть? = ";
    std::cin.getline(name, size + 1);

    do
    {
        std::cout << "Скільки Вам років? = ";
        std::cin >> age;
        std::cin.clear();
        std::cin.ignore(32767, '\n');
    } while (age <= 0 || age > 125);

    std::cout << "Де Ви навчаєтеся? = ";
    std::cin.getline(education, size + 1);

    std::cout << "Доброго дня, " << name << "!\n";
    std::cout << "Вітаємо Вас, Вам усього " << age << ", а Ви вже ведете діалог з компʼютером!\n";
    std::cout << education << " буде пишатися Вами!\n";

    return 0;
}
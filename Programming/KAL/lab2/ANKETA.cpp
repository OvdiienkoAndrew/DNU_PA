#include <iostream>

int main()
{
    const int size = 256;
    char surname[size], name[size], patronomyc[size], sex[size], birthday[size], adress[size],
        phone_number[size], education[size], group[size], hobby[size];

    for (int i = 0; i < size; i++)
    {
        surname[i] = '\0';
        name[i] = '\0';
        patronomyc[i] = '\0';
        sex[i] = '\0';
        birthday[i] = '\0';
        adress[i] = '\0';
        phone_number[i] = '\0';
        education[i] = '\0';
        group[i] = '\0';
        hobby[i] = '\0';
    }

    std::cout << "Прізвище?= ";
    std::cin.getline(surname, size);
    std::cout << "Ім'я?= ";
    std::cin.getline(name, size);
    std::cout << "По батькові?= ";
    std::cin.getline(patronomyc, size);
    std::cout << "Стать?= ";
    std::cin.getline(sex, size);
    std::cout << "Дата народження?= ";
    std::cin.getline(birthday, size);
    std::cout << "Адреса?= ";
    std::cin.getline(adress, size);
    std::cout << "Номер телефону?= ";
    std::cin.getline(phone_number, size);
    std::cout << "Місце навчання?= ";
    std::cin.getline(education, size);
    std::cout << "Група?= ";
    std::cin.getline(group, size);
    std::cout << "Хоббі?= ";
    std::cin.getline(hobby, size);

    std::cout << "\t       Прізвище : " << surname << "\n";
    std::cout << "\t           Ім'я : " << name << "\n";
    std::cout << "\t    По батькові : " << patronomyc << "\n";
    std::cout << "\t          Стать : " << sex << "\n";
    std::cout << "\tДата народження : " << birthday << "\n";
    std::cout << "\t         Адреса : " << adress << "\n";
    std::cout << "\t Номер телефону : " << phone_number << "\n";
    std::cout << "\t Місце навчання : " << education << "\n";
    std::cout << "\t          Група : " << group << "\n";
    std::cout << "\t          Хоббі : " << hobby << "\n";

    return 0;
}
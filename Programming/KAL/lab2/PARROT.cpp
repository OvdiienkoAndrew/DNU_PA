#include <iostream>

int main()
{
    const int size = 256;
    char name[size];

    for (char *temp = name; temp != name + size; temp++)
        *temp = '\0';

    /*
    або легше
for(int i = 0; i< size;i++)
name[i]='\0';

    */

    std::cout << "Введіть текст = ";
    std::cin.getline(name, size + 1);

    std::cout << name << '\n';

    return 0;
}
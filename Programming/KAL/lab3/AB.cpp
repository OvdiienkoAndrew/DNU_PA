#include <iostream>

int main()
{
    double A = 0.0, B = 0.0, temp = 0.0;
    std::cout << "A = ";
    std::cin >> A;

    std::cout << "B = ";
    std::cin >> B;

    std::cout << "A = " << A << ";\tB = " << B << ".\n";

    if (A > B)
    {
        temp = A;
        A = B;
        B = temp;
    }

    std::cout << "A = " << A << ";\tB = " << B << ".\n";
    return 0;
}
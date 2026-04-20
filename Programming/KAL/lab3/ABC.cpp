#include <iostream>

int main()
{
    double A = 0.0, B = 0.0, C = 0.0, temp = 0.0;

    std::cout << "A = ";
    std::cin >> A;

    std::cout << "B = ";
    std::cin >> B;

    std::cout << "C = ";
    std::cin >> C;

    std::cout << "A = " << A << ";\tB = " << B << ";\tC = " << C << ".\n";

    if (A > B)
    {
        temp = A;
        A = B;
        B = temp;
    }

    if (B > C)
    {
        temp = C;
        C = B;
        B = temp;
    }

    if (A > B)
    {
        temp = A;
        A = B;
        B = temp;
    }

    std::cout << "A = " << A << ";\tB = " << B << ";\tC = " << C << ".\n";
    return 0;
}
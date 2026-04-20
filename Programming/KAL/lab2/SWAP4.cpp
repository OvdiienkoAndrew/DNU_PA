#include <iostream>
// A B C D
// D A B C
int main()
{
    double A = 0.0, B = 0.0, C = 0.0, D = 0.0, temp = 0.0;

    std::cout << "A = ";
    std::cin >> A;

    std::cout << "B = ";
    std::cin >> B;

    std::cout << "C = ";
    std::cin >> C;

    std::cout << "D = ";
    std::cin >> D;

    std::cout << "A = " << A << ";\t" << "B = " << B << ";\t" << "C = " << C << ";\t" << "D = " << D << ".\n";

    temp = A;
    A = D;
    D = temp;

    temp = B;
    B = D;
    D = temp;

    temp = C;
    C = D;
    D = temp;

    std::cout << "A = " << A << ";\t" << "B = " << B << ";\t" << "C = " << C << ";\t" << "D = " << D << ".\n";
    return 0;
}
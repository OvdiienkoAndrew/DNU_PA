#include <iostream>

int main()
{
    double A = 0.0, B = 0.0, C = 0.0;

    std::cout << "A = ";
    std::cin >> A;

    std::cout << "B = ";
    std::cin >> B;

    if (A >= B)
        C = A;
    else
        C = B;

    std::cout << "Max(" << A << "; " << B << ") = " << C << "\n";
    return 0;
}
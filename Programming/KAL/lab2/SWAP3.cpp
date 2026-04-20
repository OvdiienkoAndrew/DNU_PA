#include <iostream>
// A B C
// C A B
int main()
{
    double A = 0.0, B = 0.0, C = 0.0, temp = 0.0;

    std::cout << "A = ";
    std::cin >> A;

    std::cout << "B = ";
    std::cin >> B;

    std::cout << "C = ";
    std::cin >> C;

    std::cout << "A = " << A << ";\t" << "B = " << B << ";\t" << "C = " << C << ".\n";

    temp = A;
    A = C;
    C = temp;

    /*
        A = A + C;
        C = A - C;
        A = A - C;
    */

    temp = B;
    B = C;
    C = temp;
    /*
        B = B + C;
        C = B - C;
        B = B - C;
    */

    std::cout << "A = " << A << ";\t" << "B = " << B << ";\t" << "C = " << C << ".\n";

    return 0;
}
#include <iostream>

int main()
{
    double X = 0.0, Y = 0.0;
    std::cout << "X = ";
    std::cin >> X;

    if (X < 0)
        Y = -X;
    else
        Y = X;

    std::cout << "| " << X << " | = " << Y << '\n';
    return 0;
}
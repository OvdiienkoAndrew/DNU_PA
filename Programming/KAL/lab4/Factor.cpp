#include <iostream>

int main()
{
    unsigned long long N = 0, F = 1;
    std::cout << "N = ";
    std::cin >> N;

    for (unsigned long long i = 2; i <= N; F *= i, i++)
    {
    }

    std::cout << N << "! = " << F << ".\n";
    return 0;
}
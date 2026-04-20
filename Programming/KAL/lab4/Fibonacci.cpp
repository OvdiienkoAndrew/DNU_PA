#include <iostream>

int main()
{
    unsigned long long N = 0, F = 0, minus_one = 1, minus_two = 0;
    std::cout << "N = ";
    std::cin >> N;

    for (unsigned long long i = 0; i < N - 1; i++)
    {
        F = minus_one + minus_two;
        minus_two = minus_one;
        minus_one = F;
    }

    std::cout
        << "F(" << N << ") = " << F << ".\n";
    return 0;
}
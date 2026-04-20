#include <iostream>

int main()
{
    double N = 0;
    std::cout << "N = ";
    std::cin >> N;

    if (!std::cin)
    {
        std::cerr << "Error: N must a number, no a string!\n ";
        return 1;
    }
    else if (N < 0)
    {
        std::cerr << "Error: N мусить бути додатнім, не negative!\n ";
        return 2;
    }
    else
    {
        if ((int)N != N)
        {
            std::cerr << "Error: N must be natural, not real!\n ";
            return 3;
        }

        unsigned long long F = 1;

        for (unsigned long long i = 2; i <= N; F *= i, i++)
        {
        }

        std::cout << N << "! = " << F << ".\n";

        return 0;
    }
}
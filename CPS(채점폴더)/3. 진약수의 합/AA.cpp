#include <iostream>

int main()
{
    int n, i, sum = 0;
    std::cin >> n;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            if (i != 1)
            {
                std::cout << " + ";
            }
            std::cout << i;
            sum += i;
        }
    }
    std::cout << " = " << sum;
    return 0;
}
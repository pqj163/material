#include <iostream>

int main()
{
    int a, b, i, sum = 0;
    std::cin >> a >> b;
    for (i = a; i < b; i++)
    {
        std::cout << i << " + ";
        sum += i;
    }
    std::cout << i << " = ";
    std::cout << sum + i;
    return 0;
}
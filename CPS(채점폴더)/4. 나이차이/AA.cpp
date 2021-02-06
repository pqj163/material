#include <iostream>

int main()
{
    int n, i, a, max = -2147000000, min = 2147000000;
    std::cin >> n;
    for (i = 0; i < n; i++)
    {
        std::cin >> a;
        if (a >= max)
            max = a;
        if (a <= min)
            min = a;
    }
    std::cout << max - min;
    return 0;
}

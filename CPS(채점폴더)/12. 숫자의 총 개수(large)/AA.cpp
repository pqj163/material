#include <stdio.h>

int main()
{
    int n, sum = 0, c = 1, d = 9, res = 0;
    scanf("%d", &n);
    while (sum + d < n)
    {
        res += (c * d);
        sum += d;
        c++;
        d *= 10;
    }
    res += ((n - sum) * c);
    printf("%d", res);

    return 0;
}

#include <stdio.h>

int digit_sum(int x)
{
    int tmp, sum = 0;
    while (x > 0)
    {
        tmp = x % 10;
        sum += tmp;
        x /= 10;
    }
    return sum;
}

int main()
{
    int n, i, num, sum, max = -2147000000, res;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum = digit_sum(num);
        if (sum >= max)
        {
            if (sum == max)
                res = num > res ? num : res;
            else
                res = num;
            max = sum;
        }
    }
    printf("%d\n", res);

    return 0;
}

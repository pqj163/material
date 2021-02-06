#include <stdio.h>

int main()
{
    int i, n, tmp, res, f = 0, t = 0;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        tmp = i;
        while (tmp % 2 == 0 || tmp % 5 == 0)
        {
            if (tmp % 2 == 0)
            {
                tmp /= 2;
                t++;
            }
            if (tmp % 5 == 0)
            {
                tmp /= 5;
                f++;
            }
        }
    }
    res = t < f ? t : f;
    printf("%d\n", res);

    return 0;
}
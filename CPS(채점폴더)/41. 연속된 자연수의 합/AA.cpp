#include <stdio.h>
#include <vector>
#include <algorithm>

int main()
{
    int i, j, n, sum, tmp, cnt = 0;
    scanf("%d", &n);
    int vec[n + 1];
    for (i = 2; i <= n / 2; i++)
    {
        sum = 0;
        for (j = 1; j <= i; j++)
        {
            sum += j;
        }
        tmp = n - sum;
        if (tmp % i == 0 && tmp / i >= 0)
        {
            cnt++;
            for (j = 1; j <= i; j++)
            {
                printf("%d ", j + (tmp / i));
                if (j != i)
                    printf("+ ");
            }
            printf("= %d\n", n);
        }
    }
    printf("%d", cnt);

    return 0;
}

#include <stdio.h>

int main()
{
    int i, j, n, prev, tmp, diff;
    scanf("%d", &n);
    int d[n];
    for (i = 1; i < n; i++)
        d[i] = 0;

    scanf("%d", &prev);
    for (i = 1; i < n; i++)
    {
        scanf("%d", &tmp);
        diff = (prev - tmp) * (prev - tmp);
        for (j = 1; j < n; j++)
        {
            if (d[j] == 1)
                continue;
            if ((j * j) == diff)
                d[j] = 1;
        }
        prev = tmp;
    }
    for (i = 1; i < n; i++)
    {
        if (d[i] == 0)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
#include <stdio.h>

int main()
{
    int i, j, n, tmp, cnt;
    scanf("%d", &n);
    int is[n + 1], os[n + 1];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &is[i]);
    }
    for (i = n; i >= 1; i--)
    {
        tmp = i;
        for (j = 1; j <= is[i]; j++)
        {
            os[tmp] = os[tmp + 1];
            tmp++;
        }
        os[tmp] = i;
    }
    for (i = 1; i <= n; i++)
        printf("%d ", os[i]);
    return 0;
}
#include <stdio.h>

int main()
{
    int i, n, prev, tmp, cnt = 0, max = -2147000000;
    scanf("%d", &n);
    int d[i];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        if (i == 0)
            prev = tmp;
        else
        {
            if (prev <= tmp)
                cnt += cnt == 0 ? 2 : 1;
            else
                cnt = 0;
            prev = tmp;
        }
        if (max < cnt)
            max = cnt;
    }

    printf("%d", max);
    return 0;
}
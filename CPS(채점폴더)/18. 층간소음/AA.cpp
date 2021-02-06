#include <stdio.h>

int main()
{
    int i, n, m, tmp, cnt = 0, max = -2147000000;
    bool prev = true;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        if (tmp > m)
            cnt++;
        else
            cnt = 0;
        max = max < cnt ? cnt : max;
    }

    printf("%d", max);

    return 0;
}
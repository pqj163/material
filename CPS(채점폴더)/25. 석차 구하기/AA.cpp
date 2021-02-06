#include <stdio.h>

int main()
{
    int i, j, n, tmp, cnt, max = -2147000000;
    scanf("%d", &n);
    int sco[n], ord[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &sco[i]);
    }
    for (i = 0; i < n; i++)
    {
        cnt = n + 1;
        for (j = 0; j < n; j++)
        {
            if (sco[i] >= sco[j])
                cnt--;
        }
        ord[i] = cnt;
        printf("%d ", ord[i]);
    }

    return 0;
}
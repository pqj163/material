#include <stdio.h>

int main()
{
    int i, n, max, cnt = 0;
    scanf("%d", &n);
    int h[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
    }
    max = h[n - 1];
    for (i = n - 2; i >= 0; i--)
    {
        if (h[i] > max)
        {
            cnt++;
            max = h[i];
        }
    }
    printf("%d\n", cnt);

    return 0;
}
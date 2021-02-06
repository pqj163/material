#include <stdio.h>

int main()
{
    int i, n, k, sum = 0, max = -2147000000;
    scanf("%d %d", &n, &k);
    int li[n];
    for (i = 0; i < n; i++)
        scanf("%d", &li[i]);
    for (i = 0; i < n; i++)
    {
        if (i < k)
            sum += li[i];
        else
            sum += li[i] - li[i - k];
        if (i >= k - 1)
            max = max < sum ? sum : max;
    }

    printf("%d", max);

    return 0;
}
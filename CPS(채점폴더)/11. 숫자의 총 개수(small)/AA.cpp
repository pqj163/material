#include <stdio.h>

int main()
{
    int n, i, tmp, cnt = 0; //sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        // cnt = 0;
        tmp = i;
        while (tmp > 0)
        {
            tmp /= 10;
            cnt++;
        }
        // sum += cnt;
    }
    printf("%d\n", cnt);

    return 0;
}

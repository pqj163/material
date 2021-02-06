#include <stdio.h>

int main()
{
    int i, j, k, n, tmp, cnt;
    scanf("%d", &n);
    int pr[n + 1];
    for (i = 2; i <= n; i++)
    {
        cnt = 0;
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
                cnt++;
        }
        if (cnt == 1)
            pr[i] = 0;
        else
            pr[i] = -1;
    }
    printf("%d! = ", n);
    for (i = 2; i <= n; i++)
    {
        tmp = i;
        for (j = 2; j <= tmp; j++)
        {
            if (pr[j] != -1)
            {
                while (tmp % j == 0)
                {
                    tmp /= j;
                    pr[j]++;
                }
            }
        }
    }

    for (i = 2; i <= n; i++)
    {
        if (pr[i] != -1)
            printf("%d ", pr[i]);
    }

    // 사실 j를 2부터 증가시키면 자연스레 소인수분해가 되기 때문에,
    // 굳이 for문을 돌릴 필요도, 굳이 pr에 -1을 넣어 소수가 아닌 케이스를 체크할 필요도 없다.

    return 0;
}
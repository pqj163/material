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

    // ��� j�� 2���� ������Ű�� �ڿ����� ���μ����ذ� �Ǳ� ������,
    // ���� for���� ���� �ʿ䵵, ���� pr�� -1�� �־� �Ҽ��� �ƴ� ���̽��� üũ�� �ʿ䵵 ����.

    return 0;
}
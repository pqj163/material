#include <stdio.h>

int main()
{
    int i, n, res;
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n * 2; i++)
    {
        if (i < n)
            scanf("%d", &a[i]);
        else
            scanf("%d", &b[i - n]);
    }
    for (i = 0; i < n; i++)
    {
        res = a[i] - b[i];
        switch (res)
        {
        case 1:
        case -2:
            printf("A\n");
            break;
        case -1:
        case 2:
            printf("B\n");
            break;
        default:
            printf("D\n");
            break;
        }
    }

    return 0;
}
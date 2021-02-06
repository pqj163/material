#include <stdio.h>

int main()
{
    int i, j, s, n, a, tmp;
    scanf("%d %d", &s, &n);
    int C[s];
    for (i = 0; i < n; i++)
    {
        tmp = -1;
        scanf("%d", &a);
        for (j = 0; j < s; j++)
            if (C[j] == a)
                tmp = j;
        if (tmp == -1)
            for (j = s - 1; j >= 1; j--)
                C[j] = C[j - 1];
        else
            for (j = tmp; j >= 1; j--)
                C[j] = C[j - 1];
        C[j] = a;
    }
    for (i = 0; i < s; i++)
        printf("%d ", C[i]);
    return 0;
}
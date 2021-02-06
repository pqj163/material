#include <stdio.h>

int main()
{
    int i, n, num, ans;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &num, &ans);
        if (ans == (num * (num + 1)) / 2)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
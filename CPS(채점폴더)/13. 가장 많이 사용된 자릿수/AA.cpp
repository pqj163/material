#include <stdio.h>
int cnt[10];
int main()
{
    int i, digit, res, max = -2147000000;
    char a[101];
    scanf("%s", &a);
    for (i = 0; a[i] != '\0'; i++)
    {
        digit = a[i] - 48;
        cnt[digit]++;
    }
    for (i = 0; i < 10; i++)
    {
        if (max < cnt[i])
        {
            max = cnt[i];
            res = i;
        }
        else if (max == cnt[i])
            res = res < i ? i : res;
    }
    printf("%d\n", res);
    return 0;
}

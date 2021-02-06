#include <stdio.h>

int main()
{
    int res, c = 0, h = 0, i = 1, d = 1;
    char a[10], tmp;
    scanf("%s", &a);
    while (1)
    {
        tmp = a[i];
        if (tmp == 72)
            break;
        c *= 10;
        c += (tmp - 48);
        i++;
    }
    i++;
    while (1)
    {
        tmp = a[i];
        if (tmp == '\0')
            break;
        h *= 10;
        h += (tmp - 48);
        i++;
    }
    if (c == 0)
        c = 1;
    if (h == 0)
        h = 1;
    res = (12 * c) + h;
    printf("%d\n", res);

    return 0;
}
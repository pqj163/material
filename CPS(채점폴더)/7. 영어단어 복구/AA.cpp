#include <stdio.h>

int main()
{
    char a[101], b[101];
    int i, p = 0;
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != ' ')
        {
            if (65 <= a[i] && a[i] <= 90)
                b[p++] = a[i] + 32;
            else
                b[p++] = a[i];
        }
    }
    b[p] = '\0';
    printf("%s", b);
    return 0;
}

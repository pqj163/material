#include <stdio.h>

int main()
{
    char a[31];
    int i, ch = 0;
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == '(')
            ch++;
        else if (a[i] == ')')
            ch--;
        if (ch < 0)
            break;
    }
    if (ch == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}

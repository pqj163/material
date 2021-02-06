#include <stdio.h>

int cnt[58];
int main()
{
    int i;
    char a[101], b[101];
    scanf("%s", &a);
    scanf("%s", &b);
    for (i = 0; a[i] != '\0'; i++)
    {
        cnt[a[i] - 65]++;
        cnt[b[i] - 65]--;
    }
    for (i = 0; i < 58; i++)
    {
        if (cnt[i] != 0)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");

    return 0;
}
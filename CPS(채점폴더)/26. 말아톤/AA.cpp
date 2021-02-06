#include <stdio.h>

int main()
{
    int i, j, n, cnt;
    scanf("%d", &n);
    int s[n], o[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        cnt = i + 1;
        for (j = i - 1; j >= 0; j--)
        {
            if (s[i] > s[j])
                cnt--;
        }
        o[i] = cnt;
    }
    for (i = 0; i < n; i++)
        printf("%d ", o[i]);

    // »ç½Ç

    return 0;
}
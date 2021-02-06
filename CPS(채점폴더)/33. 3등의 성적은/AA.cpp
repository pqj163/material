#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
    int tmp, m[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (m[i] < m[j])
            {
                tmp = m[i];
                m[i] = m[j];
                m[j] = tmp;
            }
        }
    }
    i = 1;
    int prev = m[0], rank = 1;
    while (rank < 3)
    {
        if (prev != m[i])
            rank += 1;
        prev = m[i];
        i += 1;
    }

    printf("%d", m[i - 1]);

    return 0;
}
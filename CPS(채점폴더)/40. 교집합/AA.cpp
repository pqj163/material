#include <stdio.h>
#include <vector>
#include <algorithm>

int main()
{
    int n, m, i, p1 = 0, p2 = 0, p3 = 0, tmp;
    scanf("%d", &n);
    std::vector<int> a(n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a.begin(), a.end());
    scanf("%d", &m);
    std::vector<int> b(m), c(n + m);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    sort(b.begin(), b.end());
    while (p1 < n && p2 < m)
    {
        tmp = a[p1] - b[p2];
        if (tmp == 0)
        {
            c[p3++] = a[p1++];
            p2++;
        }
        else if (tmp > 0)
            p2++;
        else
            p1++;
    }
    for (i = 0; i < p3; i++)
        printf("%d", c[i]);

    return 0;
}

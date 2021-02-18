#include <stdio.h>

int dy[101];
int DFS(int n)
{
    if (dy[n] > 0)
        return dy[n];
    if (n == 1 || n == 2)
        return n;
    else
        return dy[n] = DFS(n - 1) + DFS(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    // int dy[n + 1];
    // dy[1] = 1;
    // dy[2] = 2;
    // for (int i = 3; i <= n; i++)
    // {
    //     dy[i] = dy[i - 2] + dy[i - 1];
    // }
    printf("%d", DFS(n));
    return 0;
}
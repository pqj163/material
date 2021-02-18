#include <stdio.h>

int main()
{
    int n, res = 0;
    scanf("%d", &n);
    int arr[n + 1], dy[n + 1];
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    dy[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        // 만약에 바깥에서 선언해서 쓰면 그냥 주소값이 나와버린다. 왜지?
        int max = 0;
        for (int j = i - 1; j >= 1; j--)
        {
            if (arr[j] < arr[i] && dy[j] > max)
                max = dy[j];
        }
        dy[i] = max + 1;
        if (dy[i] > res)
            res = dy[i];
    }
    printf("%d", res);
    return 0;
}
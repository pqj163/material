#include <stdio.h>

int main()
{
    int n, res;
    scanf("%d", &n);
    int arr[n + 1], dy[n + 1];
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    dy[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        int max = 0;
        for (int j = i - 1; j >= 1; j--)
        {
            if (arr[j] < arr[i] && dy[j] > max)
                max = dy[j];
        }
        // ��ǻ� ���� �ڵ带 �״�� �����µ�, ������ �� ���⼭ +1 �ϴ� ���� ������ �� �𸣰ڴ�. ���� ���ǹ��� �־�� ���� �ʳ�?
        dy[i] = max + 1;
        if (dy[i] > res)
            res = dy[i];
    }
    printf("%d\n", res);
    return 0;
}
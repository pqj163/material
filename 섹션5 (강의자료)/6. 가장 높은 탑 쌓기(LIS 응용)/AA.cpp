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
        // 사실상 전의 코드를 그대로 베꼈는데, 솔직히 왜 여기서 +1 하는 건지 여전히 잘 모르겠다. 뭔가 조건문이 있어야 하지 않나?
        dy[i] = max + 1;
        if (dy[i] > res)
            res = dy[i];
    }
    printf("%d\n", res);
    return 0;
}
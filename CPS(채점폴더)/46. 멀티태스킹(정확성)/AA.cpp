#include <stdio.h>
#include <vector>
#include <algorithm>

int main()
{
    int i, n, k, next;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);
    // 영상에서는 위에서 스캔할 때 합계를 따로 계산해두었다가,
    // 그 합계가 정전예정시간보다 작으면 바로 -1을 리턴하게 해둠으로써 효율성을 증대했다.
    while (k != 0)
    {
        for (i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                arr[i]--;
                k--;
                if (k == 0)
                {
                    next = i + 1;
                    break;
                }
            }
        }
    }
    for (i = next; i < n; i++)
        if (arr[i] > 0)
        {
            printf("%d\n", i + 1);
            return 0;
        }
    for (i = 0; i < next; i++)
        if (arr[i] > 0)
        {
            printf("%d\n", i + 1);
            return 0;
        }

    // 영상에서는 while문의 조건을 1로 넣고 i가 n을 넘어가면 1로 초기화하는 등의 방법을 통해,
    // 위에서와 같이 번거롭게 반복문을 여러번 돌릴 필요가 없게 해주고,
    // 굳이 아래에 위의 모든 조건을 통과해야 프린트가 될 필요도 없게 해준다.

    printf("-1\n");

    return 0;
}

#include <stdio.h>
#include <vector>
#include <algorithm>

int main()
{
    int i, n, k, tmp, cnt = 0;
    scanf("%d %d", &n, &k);
    int pr[n + 1];
    for (i = 1; i <= n; i++)
    {
        pr[i] = i;
    }
    // 41번처럼 뭔가 나눗셈과 나머지를 이용해서 뭔가 할 수 있을 줄 알았다.
    // 근데 그냥 거의 브루트포스에 가까운 방식으로 해결하더라.
    // 그래서 흥미를 잃었다.
    printf("%d\n", pr[1]);
    return 0;
}

#include <stdio.h>

int main()
{
    int i, j, n, tmp, cnt = 0;
    scanf("%d", &n);
    int m[n];
    for (i = 0; i < n; i++)
        scanf("%d", &m[i]);
    for (i = 0; i < n; i++)
    {
        if (m[i] < 0)
            cnt++;
    }
    // 원래 위에 cnt를 안쓰고 아래를 그대로 진행하면 숫자가 음수 개수 만큼만 한쪽 끝으로 넘어간다.
    // 근데 아무리 생각해도 그럴 이유가 없는데 왜...?
    // 그래서 반복횟수를 음수 개수만큼 빼주면 정상적으로 정렬이 되는 이유를
    // 이거 적다가 깨달았는데 아래 방식대로 버블정렬을 하면 음수개수만큼 끝까지 가는 걸 한번 더 반복하기 때문에
    // 딱 음수 개수만큼 끝으로 넘어가는 거 였다. 유레카!
    // 그래서 강의에서는 다음 숫자가 음수인 반면 현재 숫자가 양수인 케이스에만 교환을 하는 걸로 조건을 건다.
    for (i = 0; i < n - cnt; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (m[j] > 0)
            {
                tmp = m[j + 1];
                m[j + 1] = m[j];
                m[j] = tmp;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", m[i]);

    return 0;
}
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
    // 41��ó�� ���� �������� �������� �̿��ؼ� ���� �� �� ���� �� �˾Ҵ�.
    // �ٵ� �׳� ���� ���Ʈ������ ����� ������� �ذ��ϴ���.
    // �׷��� ��̸� �Ҿ���.
    printf("%d\n", pr[1]);
    return 0;
}

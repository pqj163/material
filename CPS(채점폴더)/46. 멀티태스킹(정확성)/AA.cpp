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
    // ���󿡼��� ������ ��ĵ�� �� �հ踦 ���� ����صξ��ٰ�,
    // �� �հ谡 ���������ð����� ������ �ٷ� -1�� �����ϰ� �ص����ν� ȿ������ �����ߴ�.
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

    // ���󿡼��� while���� ������ 1�� �ְ� i�� n�� �Ѿ�� 1�� �ʱ�ȭ�ϴ� ���� ����� ����,
    // �������� ���� ���ŷӰ� �ݺ����� ������ ���� �ʿ䰡 ���� ���ְ�,
    // ���� �Ʒ��� ���� ��� ������ ����ؾ� ����Ʈ�� �� �ʿ䵵 ���� ���ش�.

    printf("-1\n");

    return 0;
}

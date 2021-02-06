#include <iostream>

int main()
{
    char a[100];
    int i, res = 0, cnt = 2;
    scanf("%s", &a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (48 <= a[i] && a[i] <= 57)
            res = res * 10 + (a[i] - 48);
    }
    for (i = 2; i <= res / 2; i++)
    {
        if (res % i == 0)
            cnt += 1;
    }
    std::cout << res << "\n"
              << cnt;

    return 0;
}

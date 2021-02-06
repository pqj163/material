#include <stdio.h>
int reverse(int x);
bool isPrime(int x);
int main()
{
    int i, n, num, rev;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        rev = reverse(num);
        if (isPrime(rev))
            printf("%d ", rev);
    }
    return 0;
}

int reverse(int x)
{
    int rev = 0;
    while (x > 0)
    {
        rev *= 10;
        rev += x % 10;
        x /= 10;
    }
    return rev;
}

bool isPrime(int x)
{
    int i;
    if (x == 1)
        return false;
    bool flag = true;
    for (i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
#include <stdio.h>

int main()
{
    int i, tmp, cards[10], l, a = 0, b = 0, draw = 0;
    for (i = 0; i < 20; i++)
    {
        if (i < 10)
            scanf("%d", &cards[i]);
        else
        {
            scanf("%d", &tmp);
            if (tmp == cards[i - 10])
            {
                a++;
                b++;
                draw++;
            }
            else if (tmp > cards[i - 10])
            {
                b += 3;
                l = 0;
            }
            else
            {
                a += 3;
                l = 1;
            }
        }
    }

    printf("%d %d\n", a, b);
    if (draw == 10)
        printf("D\n");
    else if (a == b)
    {
        switch (l)
        {
        case 1:
            printf("A\n");
            break;
        case 0:
            printf("B\n");
            break;
        }
    }
    else if (a > b)
        printf("A\n");
    else if (a < b)
        printf("B\n");

    return 0;
}
#include <iostream>

int main()
{
    int year, age, ch;
    char str[14], se;
    scanf("%s", &str);
    ch = (str[7] - 48);
    year = ((str[0] - 48) * 10) + (str[1] - 48);
    year += (ch <= 2) ? 1900 : 2000;
    age = 2020 - year;
    se = ch == 1 || ch == 3 ? 'M' : 'W';
    // std::cout << age << " " << se;
    printf("%d %c", age, se);

    return 0;
}

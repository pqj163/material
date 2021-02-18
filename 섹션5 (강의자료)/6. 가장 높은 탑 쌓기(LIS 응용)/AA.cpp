#include <algorithm>
#include <stdio.h>
#include <vector>

struct Brick
{
    int s, h, w;
    Brick(int a, int b, int c)
    {
        s = a, h = b, w = c;
    }
    bool operator<(const Brick &b) const
    {
        return s > b.s;
    }
};

int main()
{
    int n, a, b, c, max_h = 0, res = 0;
    scanf("%d", &n);
    std::vector<Brick> Bricks;
    std::vector<int> dy(n, 0);
    int met[n + 1][3];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        Bricks.push_back(Brick(a, b, c));
    }
    sort(Bricks.begin(), Bricks.end());
    dy[0] = Bricks[0].h;
    res = dy[0];
    for (int i = 1; i < n; i++)
    {
        max_h = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (Bricks[j].w > Bricks[i].w && dy[j] > max_h)
                max_h = dy[j];
        }
        dy[i] = max_h + Bricks[i].h;
        res = dy[i] > res ? dy[i] : res;
    }
    printf("%d", res);
    return 0;
}
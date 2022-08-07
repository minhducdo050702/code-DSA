#include "stdio.h"

int HanoiTower(int n, char a, char c, char b)
{
    if (n == 1)
        printf("chuyen dia tu coc %c sang coc %c\n", a, c);
    else
    {
        HanoiTower(n - 1, a, b, c);
        HanoiTower(1, a, c, b);
        HanoiTower(n - 1, b, c, a);
    }
}
int main()
{
    HanoiTower(3, 'a', 'c', 'b');
    return 0;
}
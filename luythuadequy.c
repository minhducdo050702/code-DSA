#include "stdio.h"
int pow1(int x, int n)
{
    if (n == 0)
        return 1;
    else
    {
        if (n % 2 == 0)
            return pow1(x, n / 2) * pow1(x, n / 2);
        else if (n % 2 == 1)
            return pow1(x, n - 1) * x;
    }
}
int main()
{
    printf("%d", pow1(3, 4));
    return 0;
}
#include "stdio.h"
int fibo(int n)
{

    if (n < 2)
        return n;
    else
    {
        int z;
        int x = 0;
        int y = 1;
        for (int k = 1; k < n; k++)
        {
            z = x + y;
            x = y;
            y = z;
        }
        return z;
    }
}

int main()
{
    printf("%d", fibo(6));
    return 0;
}
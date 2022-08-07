#include "stdio.h"
int fact(int n)
{
    int i = n;
    int fact = 1;
    while (i > 0)
    {
        fact *= i;
        i--;
    }
    return fact;
}
int main()
{
    printf("%d", fact(6));
    return 0;
}
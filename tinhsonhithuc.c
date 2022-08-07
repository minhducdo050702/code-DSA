#include "stdio.h"
int C(int n, int k)
{
    if (n == k || k == 0)
        return 1;
    else
        return C(n - 1, k) + C(n - 1, k - 1);
}
int main()
{
    printf("%d", C(10, 5));
    return 0;
}
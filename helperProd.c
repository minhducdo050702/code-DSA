#include "stdio.h"
int n = 3;
int helperProd(int list[], int i)
{
    if (i == n)
        return list[i];
    else
        return helperProd(list, i + 1) * list[i];
}
int main()
{
    int list[] = {1, 3, 3, 4};
    printf("%d", helperProd(list, 0));
    return 0;
}
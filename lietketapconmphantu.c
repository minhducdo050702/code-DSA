#include "stdio.h"
int m = 3;
int n = 5;
int dem = 0;
int a[5];
void ghinhan()
{
    dem += 1;
    printf("xau thu %d la: ", dem);
    for (int i = 1; i <= 3; i++)
        printf("%d ", a[i]);
    printf("\n");
}
void try(int k)
{
    for (int y = a[k - 1] + 1; y <= n - m + k; y++)
    {
        a[k] = y;
        if (k == m)
            ghinhan();
        else
            try(k + 1);
    }
}
int main()
{
    try(1);
    return 0;
}
#include "stdio.h"
int n = 5;
int dem = 0;
int a[10];
void ghinhan()
{
    dem += 1;
    printf("xau thu %d la: ", dem);
    for (int i = 1; i <= 5; i++)
        printf("%d ", a[i]);
    printf("\n");
}
void try(int k)
{
    for (int y = 0; y <= 1; y++)
    {
        a[k] = y;
        if (k == n)
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

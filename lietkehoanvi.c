#include "stdio.h"
int n = 6;
int dem = 0;
int a[10];
void ghinhan()
{
    dem += 1;
    printf("xau thu %d la: ", dem);
    for (int i = 1; i <= n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int UCV(int j, int k)
{
    for (int i = 1; i < k; i++)
        if (a[i] == j)
            return 0;
    return 1;
}
void try(k)
{
    for (int i = 1; i <= n; i++)

        if (UCV(i, k) == 1)
        {
            a[k] = i;
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
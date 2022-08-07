#include "stdio.h"
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int imin = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[imin])
                imin = j;
        swap(&a[imin], &a[i]);
    }
}
int main()
{
    int a[] = {23, 78, 45, 8, 32, 56};
    selectionSort(a, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
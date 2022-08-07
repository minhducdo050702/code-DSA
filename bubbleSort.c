#include "stdio.h"
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int a[], int n)
{
    int sorted = 0;
    for (int i = 0; i < n; i++)
        if (sorted == 0)
        {
            sorted = 1;
            for (int j = 0; j < n - 1 - i; j++)
                if (a[j] > a[j + 1])
                {
                    sorted = 0;
                    swap(&a[j], &a[j + 1]);
                }
        }
}
int main()
{
    int a[] = {9, 6, 2, 12, 11, 9, 3, 7};
    selectionSort(a, 8);
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
#include "stdio.h"
void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int pos = i;
        while (pos >= 0 && temp < a[pos - 1])
        {
            a[pos] = a[pos - 1];
            pos--;
        }
        a[pos] = temp;
    }
}
int main()
{
    int a[] = {23, 78, 45, 8, 32, 56};
    insertionSort(a, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d  ", a[i]);
    }
}
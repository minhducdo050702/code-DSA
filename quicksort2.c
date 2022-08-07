#include "stdio.h"
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[], int left, int right)
{
    int mid = (left + right) / 2;
    int pivot = a[mid];
    int i = left;
    int j = right;
    while (i <= j)
    {
        while (i <= right && a[i] <= pivot)
            i++;
        while (j >= left && a[j] >= pivot)
            j--;
        if (i < j)
        {
            swap(&a[i], &a[j]);
            i++;
            j--;
        }
    }
    swap(&a[mid], &a[j]);
    return j;
}
void quickSort(int a[], int left, int right)
{
    if (left < right)
    {
        int idPivot = partition(a, left, right);
        quickSort(a, left, idPivot - 1);
        quickSort(a, idPivot + 1, right);
    }
}
int main()
{
    int a[] = {0, 1, 11, 17, 13, 4, 5, 8};
    quickSort(a, 0, 8);
    for (int i = 0; i < 8; i++)
        printf("%d ", a[i]);
    return 0;
}
#include "stdio.h"
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[], int left, int right)
{
    int pivot = a[right];
    int i = left;
    int j = right - 1;
    while (i <= j)
    {
        while (i <= right - 1 && a[i] <= pivot)
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
    swap(&a[right], &a[i]);
    return i;
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
    int a[] = {40,20,10,180,120,50,7,30,100};
    quickSort(a, 0, 9);
    for (int i = 0; i < 9; i++)
        printf("%d ", a[i]);
    return 0;
}
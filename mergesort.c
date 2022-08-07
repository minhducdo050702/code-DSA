#include <stdio.h>
#define max_size 100
void merge(int a[], int p, int q, int r)
{
    int first1 = p;
    int last1 = q;
    int first2 = q + 1;
    int last2 = r;
    int index = p;
    int tempa[max_size];
    for (; first1 <= last1 && first2 <= last2; index++)
    {
        if (a[first1] <= a[first2])
        {
            tempa[index] = a[first1];
            first1++;
        }
        else
        {
            tempa[index] = a[first2];
            first2++;
        }
    }
    for (; first1 <= last1; index++, first1++)
        tempa[index] = a[first1];
    for (; first2 <= last2; index++, first2++)
        tempa[index] = a[first2];
    for (int index = p; index <= r; index++)
        a[index] = tempa[index];
}
void mergeSort(int a[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(a, p, q);
        mergeSort(a, q + 1, r);
        merge(a, p, q, r);
    }
}
int main()
{
    int a[] = {14, 23, 45, 98, 6, 33, 42, 67};
    mergeSort(a, 0, 7);
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

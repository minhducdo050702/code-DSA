#include <stdio.h>
#define max_size 1000
void merge(int a[], int p, int q, int r)
{
    int first1 = p;
    int first2 = q + 1;
    int last1 = q;
    int last2 = r;
    int index = first1;
    int temp[max_size];
    for (; first1 <= last1 && first2 <= last2; index++)
    {
        if (a[first1] <= a[first2])
        {
            temp[index] = a[first1];
            first1++;
        }
        else
        {
            temp[index] = a[first2];
            first2++;
        }
    }
    for (; first1 <= last1; first1++, index++)
        temp[index] = a[first1];
    for (; first2 <= last2; first2++, index++)
        temp[index] = a[first2];
    for (int index = p; index <= r; index++)
        a[index] = temp[index];
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
int binsearch(int a[], int start, int end, int key)
{
    if (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == key)
            return 1;
        else if (a[mid] > key)
            return binsearch(a, start, mid - 1, key);
        else
            return binsearch(a, mid + 1, end, key);
    }
    return 0;
}
void solve(int a[], int p, int r, int Q)
{
    mergeSort(a, p, r);
    int cnt = 0;
    for (int i = 0; i <= r; i++)
    {
        int ok = binsearch(a, i + 1, r, Q - a[i]);
        cnt += ok;
    }
    printf("number of pair is: %d", cnt);
}
int main()
{
    FILE *f = fopen("test100.txt", "r");
    int r = fgetc(f);
    int q = fgetc(f);
    int a[1000];
    printf("%d  ", r);
    printf("%d  ", q);
    for (int i = 0; i < 100; i++)
        printf("%d  ", fgetc(f));
    fclose(f);
    return 0;
}
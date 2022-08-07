#include "stdio.h"
int duyettoanbococaitien(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum > max)
                max = sum;
        }
    }
    return max;
}
int main()
{
    int a[] = {-2, 11, -4, 13, -5, 2};
    printf("%d", duyettoanbococaitien(a, 6));
    return 0;
}

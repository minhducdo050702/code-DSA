#include "stdio.h"
#include "time.h"
int quyhoachdong(int a[], int n)
{
    int maxsum = a[0];
    int ei = a[0];
    int imax = 0;
    for (int i = 1; i < n; i++)
    {
        int u = a[i];
        int v = a[i] + ei;
        if (u > v)
            ei = u;
        else
            ei = v;
        if (ei > maxsum)
        {
            imax = i;
            maxsum = ei;
        }
    }
    return maxsum;
}
int main()
{
    int a[] = {-2, 11, -4, 13, -5, 2};
    clock_t start = clock();
    printf("%d\n", quyhoachdong(a, 6));
    clock_t end = clock();
    double  timelapse = (double)(end - start)/CLOCKS_PER_SEC;
    printf("%f", timelapse);
    return 0;
}
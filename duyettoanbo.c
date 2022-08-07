#include <stdio.h>
int duyettoanbo(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
                sum += a[k];
            if (sum > max)
                max = sum;
        }
    return max;
}

int main()
{
    int a[] = {-2, 11, -4, 13, -5, 2};
    printf("%d", duyettoanbo(a, 6));
    return 0;
}
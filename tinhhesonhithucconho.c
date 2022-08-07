#include "stdio.h"
int D[100][100];
int C(int n, int k)
{
    if (D[n][k] > 0)
        return D[n][k];
    else
    {
        D[n][k] = C(n - 1, k) + C(n - 1, k - 1);
        return D[n][k];
    }
}
int main()
{
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
        {
            if (i == j || j == 0)
                D[i][j] = 1;
            else
                D[i][j] = 0;
        }
    printf("%d", C(10, 5));
    return 0;
}
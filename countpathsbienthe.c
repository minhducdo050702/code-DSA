#include "stdio.h"
int CountPaths(int i, int j, int D, int C)
{
    if (i == D || j == C)
        return 1;
    else
        return CountPaths(i + 1, j, D, C) + CountPaths(i, j + 1, D, C) + CountPaths(i + 1, j + 1, D, C);
}
int main()
{
    printf("%d", CountPaths(1, 1, 2, 3));
    return 0;
}
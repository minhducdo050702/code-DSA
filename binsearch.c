#include "stdio.h"
int binsearch(int low, int high, int S[], int key)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (S[mid] == key)
            return mid;
        else if (S[mid] > key)
            return binsearch(low, mid - 1, S, key);
        else
            return binsearch(mid + 1, high, S, key);
    }
    else
        return -1;
}
int main()
{
    int S[] = {6, 13, 14, 25, 33, 43, 51, 53, 64, 72, 84, 93, 95, 96, 97};
    printf("%d", binsearch(0, 14, S, 31));
    return 0;
}
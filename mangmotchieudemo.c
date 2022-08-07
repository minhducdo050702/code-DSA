#include "stdio.h"
int main()
{
    int A[] = {5, 10, 12, 15, 4};
    printf("Address     Content\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%8d      %5d", &A[i], A[i]);
        printf("\n");
    }
    printf("Address     Content\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%8d      %5d", A + i, *(A + i));
        printf("\n");
    }
    int *ptr = A;
    printf("Address     Content\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%8d      %5d", ptr + i, *(ptr + i));
        printf("\n");
    }
    return 0;
}
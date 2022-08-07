#include <stdio.h>
void linearSearch(int a[], int size, int target)
{
    int i;
    for (i = 0; i < size; i++)
        if (a[i] == target)
            break;
    if (i < size)
        printf("the target is in the list @ index= %d\n", i + 1);
    else
        printf("the target is not in the list ");
}
int main()
{
    int a[] = {-7, 9, -5, 2, 8, 3};
    linearSearch(a, 6, 0);
    return 0;
}
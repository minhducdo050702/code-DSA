#include <stdio.h>
#include <string.h>
#define max_size 100
typedef struct node
{
    char name[20];
    int ngay;
    int thang;
    int nam;
} node;
int comp(node a, node b)
{
    if (strcmp(a.name, b.name) > 0)
        return 0;
    if (strcmp(a.name, b.name) < 0)
        return 1;
    if (a.nam > b.nam)
        return 0;
    if (a.nam < b.nam)
        return 1;
    if (a.thang > b.thang)
        return 0;
    if (a.thang < b.thang)
        return 1;
    if (a.ngay > b.ngay)
        return 0;
    if (a.ngay < b.ngay)
        return 1;
}
void merge(node a[], int p, int q, int r)
{
    int first1 = p;
    int last1 = q;
    int first2 = q + 1;
    int last2 = r;
    int index = p;
    node tempa[max_size];
    for (; first1 <= last1, first2 <= last2; index++)
    {
        if (comp(a[first1], a[first2]) == 1)
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
void mergeSort(node a[], int p, int r)
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
    node dsnhanvien[10] = {
        {"dmd", 5, 7, 2002},
        {"dzdmd", 5, 7, 2002},
        {"dmd", 5, 8, 2002},
        {"dmd", 5, 7, 2003},
        {"admd", 5, 7, 2002},
        {"dmd", 3, 6, 2002},
        {"dmdking", 3, 6, 2002},
        {"dmdmanhnhat", 2, 6, 2002},
        {"doclapdmd", 3, 6, 2002},
        {"tutindmd", 3, 6, 2012},
    };
    mergeSort(dsnhanvien, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        printf("ho ten : %2s ngay sinh: %d /%d /%d\n", dsnhanvien[i].name, dsnhanvien[i].ngay, dsnhanvien[i].thang, dsnhanvien[i].nam);
    }
    return 0;
}
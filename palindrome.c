#include "stdio.h"
#include "string.h"
int palind(char xau[], int start, int end)
{
    if (start >= end)
        return 1;
    else return (xau[start]==xau[end])&&palind(xau,start+1,end-1);
}
int main()
{
    char x[] = "able was i ere i saw elba";
    printf("%d",palind(x,0,strlen(x)-1));
    return 0;
}
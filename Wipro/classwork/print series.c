#include <stdio.h>

int main()
{
    int n=10;
    int i;
    i=1;
    while(i<n)
    {
        printf("%d",(i*i)-1);
        i++;
    }
    printf("%d",(i*i)-1);
    return 0;
}
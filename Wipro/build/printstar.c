#include <stdio.h>
int main()
{
    int n;
    int i,j;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            printf("*");
            i++;
        }
    }
    printf("\n\n");
    return 0;
}
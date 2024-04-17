#include <stdio.h>

int main()
{

    int even=0, odd=0;
    for (int i=0;i<=50;i++)
    {
        if(i%2==0)
        even+=i;
        else
        odd+=i;
    }

    printf("sum of even no: %d and odd no: %d",even,odd);
}
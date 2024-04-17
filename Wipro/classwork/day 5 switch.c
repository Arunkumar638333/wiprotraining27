#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ch;
    system ("clear");
    printf("\nEnter a value between(1-5): ");
    scanf("%d" ,&ch);

    switch(ch)
    {
        default:

            printf("\nEnter a value between 1-5 only");
            break;
        case 1:
            printf("\n1 is pressed");
            break;
        case 2:
            printf("\n2 is pressed");
            break;
        case 3:
            printf("\n3 is pressed");
            break;
        case 4:
            printf("\n4 is pressed");
            break;
        case 5:
             printf("\n5 is pressed");
            break;

    
    }
    printf("\n Program ended\n\n");
    return 0;
}



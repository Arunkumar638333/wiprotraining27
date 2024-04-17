#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age :");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("category : Minor \nNot eligible to vote\n");
    }

    else
    {
        if (age > 18 && age < 65)
        {
             printf("category : Adult \nEligible to vote\n");
        }
        else{
            printf("category ::::: senior citizen \nEligible to vote\n");
        }
    }
        
           
    

}
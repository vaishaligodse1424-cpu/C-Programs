#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibilty(int Age)
{
    if(Age>=18)
    {
        printf("you can voting:");
    }
    else
    {
        printf("you cant voting:");
    }

}
int main()
{
    int iValue=0;

    printf("enter the  number:");
    scanf("%d",&iValue);
    
    CheckVotingEligibilty(iValue);

    return EXIT_SUCCESS;

}
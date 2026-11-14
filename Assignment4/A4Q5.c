#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if(iValue%5==0)
    {
        printf("the number is divisible by 5");
    }
    else
    {
        printf("the number is divisible by 5");
    }

}
int main()
{
    int iValue=0;

    printf("enter the  number:");
    scanf("%d",&iValue);
    
    CheckDivisibility(iValue);

    return EXIT_SUCCESS;

}
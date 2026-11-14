#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue>0)
    {
        printf("the number positive");
    }
    else if(iValue<0)
    {
        printf("the number negative");
    }
    else
    {
        printf("the is zero");

    }
}
int main()
{
    int iValue=0;

    printf("ente rthe number:");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
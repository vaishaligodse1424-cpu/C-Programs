#include<stdio.h>

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("the number is small");
    }
    else if(iNo>=50 && iNo<100)
    {
        printf("the number is medium");
    }
    else
    {
        printf("the number is large");
    }
}
int main()
{
    int iValue=0;

    printf("enter the number:");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
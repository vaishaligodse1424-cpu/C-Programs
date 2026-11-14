#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    
    if(iValue%2 == 0)
    {
        printf("the number is even\n");
    }
    else
    {
        printf("the number is odd\n");
    }
}
int main()
{
    int iValue=0;

    printf("enter the number:");
    scanf("%d",&iValue);
    
    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;

}

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkEven(int iNo)
{
    if(iNo%2==0)
    {
        return TRUE;

    }
    else
    {
         return FALSE;
    }
}
int main()
{
     int iValue=0;
     BOOL bRet=FALSE;

     printf("enter the number:");
     scanf("%d",&iValue);

     bRet=chkEven(iValue);

     if(bRet==TRUE)
     {
        printf("the number is even");

     }
     else
     {
        printf("The number is odd");
     }
     return 0;
}
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo)
{
    if(iNo==10)
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

    bRet=ChkEqual(iValue);

    if(bRet==TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }
    return 0;


}
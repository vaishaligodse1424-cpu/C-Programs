/*
Enter the Character:6
It Is Digit

Enter the Character:A
It Is Not  Digit

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch>='0'&&ch<='9')
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
    char cValue;

    BOOL bRet=FALSE;

    printf("Enter the Character:");
    scanf("%c",&cValue);

    bRet=ChkDigit(cValue);

    if(bRet==TRUE)
    {
        printf("It Is Digit");
    }
    else
    {
        printf("It Is Not  Digit");
    }
    return 0;
}

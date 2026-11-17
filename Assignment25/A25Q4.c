/*
enter the character:a
It Is Small

enter the character:A
It Is Not Small

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch>='a'&&ch<='z')
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

    printf("enter the character:");
    scanf("%c",&cValue);

    bRet=ChkSmall(cValue);

    if(bRet==TRUE)
    {
        printf("It Is Small");
    }
    else
    {
        printf("It Is Not Small");
    }
    return 0;
}
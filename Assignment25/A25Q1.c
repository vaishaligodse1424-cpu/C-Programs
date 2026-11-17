/*
enter the character:F
It Is Character

enter the character:&
It Is Not Character
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
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
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("enter the character:");
    scanf("%c",&cValue);

    bRet=ChkAlpha(cValue);

    if(bRet==TRUE)
    {
        printf("It Is Character");
    }
    else
    {
        printf("It Is Not Character");
    }
    return 0;
}
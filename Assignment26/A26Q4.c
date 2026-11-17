/*
Enter character:%
It Is Special Character

Enter character:a
It Is Not Special Character


*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if(ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*')
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

    printf("Enter character:");
    scanf("%c",&cValue);


    bRet=ChkSpecial(cValue);

    if(bRet==TRUE)
    {
        printf("It Is Special Character");
    }
    else
    {
        printf("It Is Not Special Character");
    }

    return 0;
}
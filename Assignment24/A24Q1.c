/*
enter string:marvellous multi os
enter character:e
character found

enter string:marvellous multi os
enter character:w
character not found
*/
#include<stdio.h>

 #define TRUE 1
 #define FALSE 0

 typedef int BOOL;

 BOOL ChkChar(char *str,char ch)
 {
    while(*str!='\0')
    {
        if(*str==ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
 }
 int main()
 {
    char arr[20];
    char cValue;
    BOOL bRet=FALSE;

    printf("enter string:");
    scanf("%[^\n]s",arr);

    printf("enter character:");
    scanf(" %c",&cValue);

    bRet=ChkChar(arr,cValue);

    if(bRet==TRUE)
    {
        printf("character found");
    }
    else
    {
        printf("character not found");
    }
    return 0;
 }
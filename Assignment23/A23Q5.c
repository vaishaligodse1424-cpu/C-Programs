/*
enter String:marvellous
Number of White Space are :0

enter String:marvellous
Number of White Space are :0
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int CountWhite(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str==' ')
        {
            iCnt++;
        }
         str++;
    }
   return iCnt;
}
int main()
{
    char arr[200];
    int iRet=0;

    printf("enter String:");
    scanf("%[^\n]s",arr);

    iRet=CountWhite(arr);

    printf("Number of White Space are :%d\n",iRet);

    return 0;
}
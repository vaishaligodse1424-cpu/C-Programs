/*
  enter String:marvellous multi os
enter character:m
character frequency :2

enter String:marvellous multi os
enter character:w
character frequency :0
*/

#include<stdio.h>

int FirstChar(char *str,char ch)
{
   int iCharCount=0;
   while(*str!='\0')
   {
    if(*str==ch)
    {
        iCharCount++;
       
    }
    str++;
   }
   return  iCharCount;
}
int main()
{
    char arr[20];
    char cValue;
    int iRet=0;

    printf("enter String:");
    scanf("%[^\n]s",arr);

    printf("enter character:");
    scanf(" %c",&cValue);

    iRet=FirstChar(arr,cValue);

    printf("character frequency :%d",iRet);

    return 0;

}

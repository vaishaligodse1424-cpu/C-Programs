/*
enter string:Marvellous Multi Os
Enter character:M
The position of character :11

enter string:Marvellous Multi Os
Enter character:w
The position of character :-1

enter string:Marvellous Multi Os
Enter character:e
The position of character :4
*/

#include<stdio.h>

int LastChar(char *str,char ch)
{
    int iPosition=0;
    int iIndex=-1;

    while(*str!='\0')
    {
     if(*str==ch)
        {
            iIndex=iPosition;    
        }
     iPosition++;
    str++;
    }
    return iIndex;
}
int main()
{
    char arr[20];
    int iRet=0;
    char cValue;

    printf("enter string:");
    scanf("%[^\n]s",arr);

    printf("Enter character:");
    scanf(" %c",&cValue);

    iRet=LastChar(arr,cValue);

    printf("The position of character :%d",iRet);

    return 0;

}
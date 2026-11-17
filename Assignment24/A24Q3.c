/*
enter string:marvellous
Enter character:m
The position of character :0


enter string:marvellous
Enter character:w
The position of character :-1

enter string:marvellous
Enter character:e
The position of character :4

enter string:marvellous
Enter character:u
The position of character :8

*/
#include<stdio.h>

int FirstChar(char *str,char ch)
{
    int iPosition=0;


    while(*str!=0)
    {
        if(*str==ch)
        {
           return iPosition;
         
        }
        iPosition++ ; 
        str++;
    }
    return -1;
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

    iRet=FirstChar(arr,cValue);

    printf("The position of character :%d",iRet);

    return 0;

}
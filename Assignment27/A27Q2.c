/*
Enter string:Marvellous Multi OS
13
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int CountSmall(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str>='a'&&*str<='z')
        {
            iCnt++;
        }
        str++;
    }
  return iCnt;
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string:");
    scanf("%[^\n]s",arr);

    iRet=CountSmall(arr);

    printf("%d",iRet);

    return 0;
}
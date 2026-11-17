/*
Enter string::MarvellouS
6  (8-2)
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Difference(char *str)
{
    int iCountCapital=0;
    int iCountSmall=0;

    

    while(*str!='\0')
    {
        if(*str>='A'&&*str<='Z')
        {
            iCountCapital++;
        }
        else if(*str>='a'&&*str<='z')
        {
            iCountSmall++;
        }
        str++;
        
    }
   return iCountSmall-iCountCapital;
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string:");
    scanf("%[^\n]s",arr);

    iRet=Difference(arr);

    printf("%d",iRet);

    return 0;
}
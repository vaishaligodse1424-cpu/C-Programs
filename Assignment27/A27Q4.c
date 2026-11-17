/*
Enter string:marvellous
It Contains Vowel

Enter string:xyz
It Not Contains Vowel

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    int i=0;
    while(*str!='\0')
    {
        if(*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U'||
           *str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
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
    BOOL bRet=FALSE;

    printf("Enter string:");
    scanf("%[^\n]s",arr);

    bRet=ChkVowel(arr);

    if(bRet==TRUE)
    {
        printf("It Contains Vowel");

    }
    else
    {
        printf("It Not Contains Vowel");
    }
    return 0;
}
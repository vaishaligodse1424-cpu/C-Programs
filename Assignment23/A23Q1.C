/*
enter string:Marvellous Multi Os
Modified string is :marvellous multi os

*/



#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strlwrx(char *str)
{
    char Captital[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char Small[]="abcdefghijklmnopqrstuvwxyz";

    int i;

    while(*str!='\0')
    {
        for(i=0;i<26;i++)
        {
            if(*str==Small[i] )
            {
                *str=Captital[i];
           
            
                break;
            }
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("enter string:");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is :%s",arr);

    return 0;
}
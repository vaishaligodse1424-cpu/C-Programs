/*
enter string:MArvelLouS MUlti Os
Modified string is :maRVELlOUs muLTI oS

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strtogglex(char *str)
{
    char Capital[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char Small[]="abcdefghijklmnopqrstuvwxyz";
    int i;

    while(*str!='\0')
    {
        for(i=0;i<26;i++)
        {
            if(*str==Capital[i])
            {
                *str=Small[i];

                break;
            }
            else if(*str==Small[i])
            {
                *str=Capital[i];
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

    strtogglex(arr);

    printf("Modified string is :%s",arr);

    return 0;
}

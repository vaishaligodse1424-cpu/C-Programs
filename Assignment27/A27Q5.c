/*

Enter string::Marvellous
suollevraM
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Reverse(char *str)//str[]
{
    int i,j=0;

    while(str[j]!='\0')
    {
        j++;
    }
    for(i=j-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
 
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string:");
    scanf("%[^\n]s",arr);

    Reverse(arr);

    return 0;
}
/*
  enter string:abcd
modified string is d c b a

*/

#include<stdio.h>
#include<string.h>

void strRevX(char *str)
{
    int i;

    while(*str!='\0')
    {
        for(i=strlen(str)-1;i>=0;i--)   //0 a 1 b 3 c 4 d
        {
            printf(" %c",str[i]);
        }
        break;
    }
}
int main()
{
    char arr[20];

    printf("enter string:");
    scanf("%[^\n]s",arr);

    printf("modified string is");

    strRevX(arr);

    return 0;
}
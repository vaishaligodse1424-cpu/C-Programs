/*
enter string:Mravcelous18909
Digits from string are:18909


enter string:DEMO
Digits from string are:

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void DisplayDigit(char *str)
{
    
    while(*str!=0)
    {
        if(*str>='0'&&*str<='9')
        {
          printf("%c",*str);
        }
        str++;
    }
}

 int main()
{
    char arr[20];

    printf("enter string:");
    scanf("%[^'\n']s",arr);


    printf("Digits from string are:");
    
  DisplayDigit(arr);

    return 0;
}


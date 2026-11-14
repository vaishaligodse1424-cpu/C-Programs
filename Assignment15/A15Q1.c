#include<stdio.h>

int main()
{
    char Name[30];

    printf("enter your full name:");
    scanf("%29[^\n]",Name);

    printf("your name is %s",Name);
    return 0;
}
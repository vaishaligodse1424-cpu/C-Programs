
/*

Enter character:Q
q

Enter character:m
M

Enter character:4
4

*/
#include<stdio.h>

void Display(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        ch =ch-32;
    }
     else if(ch>='A'&&ch<='Z')
    {
        ch =ch+32;
    }
    printf("%c",ch);
}
int main()
{
    char cValue='\0';

    printf("Enter character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
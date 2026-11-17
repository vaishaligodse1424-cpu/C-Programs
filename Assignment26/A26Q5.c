/*
Enter character:A
Character:A
Decimal:65
Hexadecimal:0X41
Octal:0101



Enter character:B
Character:B
Decimal:66
Hexadecimal:0X42
Octal:0102

*/

#include<stdio.h>

void Display(char ch)
{
    printf("Character:%c\n",ch);
    printf("Decimal:%d\n",ch);
    printf("Hexadecimal:%#X\n",ch);
    printf("Octal:%#o",ch);
}
int main()
{
    char cValue='\0';

    printf("Enter character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
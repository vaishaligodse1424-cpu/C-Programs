#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue>='A'&&cValue<='Z')
    {
        printf("Uppercase Alphabet");
    }
    else if(cValue>='a'&&cValue<='z')
    {
        printf("Lowercase Alphabet");
    
    }
    else if(cValue>='0'&&cValue<='9')
    {
        printf("Digit");

    }
    else
    {
       printf("Special symbol");
    }
}
int main()
{
    char cValue;

    printf("enter character:");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
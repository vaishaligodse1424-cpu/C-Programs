
/*

Enter character:Q
 Q       R       S       T       U       V       W       X       Y       Z

Enter character:m
m       n       o       p       q       r       s       t       u       v       w       x       y       z

Enter character:4
Inavlid Character
*/
#include<stdio.h>

void Display(char ch)
{
    char i='\0';

    if(ch>='A'&&ch<='Z')
    {
        for(i=ch;i<='Z';i++)
        {
            printf(" %c\t",i);
        }
    }

    else if(ch>='a'&&ch<='z')
    {
        for(i=ch;i<='z';i++)
        {
            printf( "%c\t",i);
        }
    }
    else
    {
        printf("Inavlid Character");
    }
    
}
int main()
{
    char cValue='\0';

    printf("Enter character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
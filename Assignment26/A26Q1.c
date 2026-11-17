#include<stdio.h>

void DisplayASCII()
{
    int i=0;
    printf("Decimal\tHexadecimal\tOctal\tSymbol\n");
    for(i=0;i<=255;i++)
    {
      

       printf("%d\t%X\t%o\t%c\t\n",i,i,i,i);
    }
}
int main()
{
    DisplayASCII();
    return 0;
}
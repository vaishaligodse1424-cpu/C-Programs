#include<stdio.h>

void Table(int iNo)
{
    int iCnt=0;
    for(iCnt=10;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt*iNo);
    }
}
int main()
{
    int iValue=0;

    printf("Enter the numbeer:");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}
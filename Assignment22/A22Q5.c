/*
enter number:8
2       4       6       8       10      12      14      16
*/
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt*2);
    }
    printf("\n\n");

}
int main()
{
    int iValue=0;


    printf("enter number:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;;
}
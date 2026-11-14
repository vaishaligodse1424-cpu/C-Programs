/*
 input:23 35
 output: 24 26 28 30 32 34

 input:-10 2
 output:-10 -8 -6 -4 -2 0 2

 input:90 18
 output:INVALID RANGE


*/
#include<stdio.h>

void RangeDisplayEven(int iStart,int iEnd)
{
   int iCnt=0;

    if(iStart>iEnd)
    {
        printf("INVALID RANGE");
    
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue1=0,iValue2;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}
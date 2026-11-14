/*
input:23 30
output:212

input:-10 2
output:INALID RANGE

input:90 18
output:INAVLID RANGE





*/





#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
    int iCnt=0;
    int iSum=0;
    if(iStart<0||iEnd<0||iStart>iEnd)
    {
        printf("INVALID RANGE");
    }
    else
    {
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    
    printf("%d\t",iSum);
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);
   
    RangeSum(iValue1,iValue2);

    return 0;
}
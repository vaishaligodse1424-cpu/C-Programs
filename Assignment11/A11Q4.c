/*
input:23 30
output:108

input:10 18
output:70

input:-10 2
output:INVALID RANGE




*/




#include<stdio.h>

int RangeSumEven(int iStart,int iEnd)
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
            if(iCnt%2==0)
            {
                
            iSum=iSum+iCnt;
            }
        }
        printf("%d",iSum);
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);
   
    RangeSumEven(iValue1,iValue2);

    return 0;
}
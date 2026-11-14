/*
input:23 35
output: 23 24 25 26 27 28 29 30 31 32 33 34 35

input:-10 2
output:-10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2

input:90 18
output:INVALID RANGE

*/



#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
    int iCnt=0;
    
    
    if(iStart>iEnd)
    {
        printf("INALID RANGE");
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
   
    {
       printf("%d\t",iCnt);
    }
     
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter strating point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}
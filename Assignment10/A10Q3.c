#include<stdio.h>

int KMtoMeter(int iNo)
{
    int Distance=0;
    

    Distance=iNo*1000;

    return Distance;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter the number:");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);

    printf("km to meter conversion is%d:",iRet);

    return 0;
}
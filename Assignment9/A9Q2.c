#include<stdio.h>

int DollarToINR(int iNo)
{
    int iAns=0;
    if(iNo==3)
    {
        iAns=270;
    }
    else
    {
        iAns=iNo*70;
    }
    return iAns;
}
int main()
{
    int iValue=0 ,iRet=0;

    printf("enter the number:");
    scanf("%d",&iValue);

    iRet=DollarToINR(iValue);
    printf("The indian currency :%d",iRet);

    return 0;

}
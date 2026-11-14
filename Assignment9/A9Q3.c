#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt=0;
    int iFact=1;
    
    for(iCnt=iNo;iCnt>=2;iCnt--)
    {
        if(iCnt%2==0)
        {
            iFact=iFact*iCnt;
        }
    }
return iFact;
}
int main()
{
    int iValue=0,iRet=0;

    printf("enter the number:");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);
    printf("The Factorial is %d",iRet);

    return 0;

}
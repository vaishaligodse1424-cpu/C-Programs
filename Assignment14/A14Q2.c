#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt=0;
    int iFact=1;

    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        if(iNo%iCnt==0)
        {
           printf("%d\t",iCnt);
        }
    }
   
}
int main()
{
    int iValue=0;
    
    printf("enter number:");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}

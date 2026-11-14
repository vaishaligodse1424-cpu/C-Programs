/*
input=5

output=1*3*5=15

input=-5

output=1*3*5=15




*/



#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    int iCnt=0;
    int iOddFact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2!=0)
        {
           iOddFact=iOddFact*iCnt;
        }
    }
   printf("%d",iOddFact);
}
int main()
{
    int iValue=0;
  
    printf("enter the number:");
    scanf("%d",&iValue);

    OddFactorial(iValue);
   

    return EXIT_SUCCESS;
}

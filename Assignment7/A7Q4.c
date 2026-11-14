#include<stdio.h>
void ODDdisplay(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt=iCnt+2)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue=0;

    printf("ente rthe number:");
    scanf("%d",&iValue);

    ODDdisplay(iValue);
    return 0;
}
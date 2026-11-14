#include<stdio.h>

int Multiply(int No1,int No2,int No3)
{
    int iAns=1;
    if(No1!=0)
    {
        iAns =iAns*No1;
    }
    if(No2!=0)
    {
        iAns=iAns*No2;
    }
    if(No3!=0)
    {
        iAns=iAns*No3;
    }
    if(No1==0&&No2==0&&No3==0)
    {
        iAns=0;
    }
    return iAns;
}
int main()
{
    int iValue1=0,iValue2=0,iValue3=0;
    int iRet=0;

    printf("Enter three numbers");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);
    printf("multiplication is :%d\n",iRet);

    return 0;
}
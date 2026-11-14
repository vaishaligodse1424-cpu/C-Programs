#include<stdio.h>

float Percentage(float fTotal,float fObtained)
{
    float fPer=0.0;
    if(fTotal==0)
    {

        return 0;
    }
    fPer=(fObtained/fTotal)*100;
    return fPer;
}
int main()
{
    float fValue1=0,fValue2=0;
    float fRet=0;

    printf("ENter two numbers:");
    scanf("%f%f",&fValue1,&fValue2);

    fRet=Percentage(fValue1,fValue2);
    printf("Percentag if:%f",fRet);

    return 0;
}
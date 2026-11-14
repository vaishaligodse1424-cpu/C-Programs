#include<stdio.h>
 
double FhtoCs(float fTemp)
{
    double Ans=0.0;
   
    Ans=(fTemp-32)*(5.0/9.0);

    return Ans;

}
int main()
{

    float fValue=0.0;
    double dRet=0.0;

    printf("enter the temp:");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);

    printf("the temper is:%lf",dRet);

    return 0;
}
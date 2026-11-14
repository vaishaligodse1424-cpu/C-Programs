#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
    double Area=0.0;
    
    Area=fWidth*fHeight;

    return Area;
}
int main()
{
    float fValue1=0,fValue2=0;
    double dRet=0.0;

    printf("enter the height:");
    scanf("%f",&fValue1);

    printf("enter the width:");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);

    printf("the area of reactangle is:%f",dRet);

    return 0;
}
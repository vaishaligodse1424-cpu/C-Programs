#include<stdio.h>

double CircleArea(float fRadius)
{
    double Area=0.0;
    float PI=3.14;
   

    Area=PI*fRadius*fRadius;

    return Area;
    

}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("enter the number:");
    scanf("%f",&fValue);
    
    dRet=CircleArea(fValue);

    printf("the area of circle is%f:",dRet);

    return 0;
}
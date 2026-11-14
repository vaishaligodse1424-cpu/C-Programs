#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear<=0)
    {
        printf("Inalid year");
    }
    else if(iYear%400==0)
    {
        printf("Leap Year");
    }
    else if(iYear%100==0)
    {
        printf("Not Leap Year");

    }
    else if (iYear%4==0)
    {
       printf("Leap Year");
    }
    else
    {
        printf("Not Leap year");
    }
}
int main()
{
    int iYear=0;

    printf("enter the year:");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);
    return EXIT_SUCCESS;
}
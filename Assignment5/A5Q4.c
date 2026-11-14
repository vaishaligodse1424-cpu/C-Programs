 #include<stdio.h>
 #include<stdlib.h>

 void CheckMultipleDivisbility(int iValue)
 {
    if(iValue%3==0&&iValue%5==0)
    {
        printf("Divisible by both ");
    }
    else if(iValue%3==0)
    {
        printf("Divsible by 3 only");

    }
    else if(iValue%5==0)
    {
        printf("Divisible by 5 only ");
    }
    else
    {
        printf("Not divisible by either");
    }
 }
 int main()
 {
    int iValue=0;

    printf("enter the number:");
    scanf("%d",&iValue);

    CheckMultipleDivisbility(iValue);

    return EXIT_SUCCESS;
 }
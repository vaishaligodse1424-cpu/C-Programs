/*
enter the Division:A
Your Exam At 7 AM

enter the Division:d
Your Exam At 10.30 AM

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplaySchedule(char chDiv)
{
    if(chDiv=='A'||chDiv=='a')
    {
       printf("Your Exam At 7 AM");
    }
    else if(chDiv=='B'||chDiv=='b')
    {
        printf("Your Exam At 8.30 AM");
    }
    else if(chDiv=='C'||chDiv=='c')
    {
        printf("Your Exam At 9.30AM");
    }
     else if(chDiv=='D'||chDiv=='d')
    {
        printf("Your Exam At 10.30 AM");
    }
    else
    {
        printf("Invalid Division");
    }

}
int main()
{
    char cValue;
    BOOL bRet=FALSE;

    printf("enter the Division:");
    scanf("%c",&cValue);

    bRet=DisplaySchedule(cValue);

    return 0;
}
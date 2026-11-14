/*

enter number of rows:4
enter number of columns:4
1       2       3       4

5       6       7       8

9       10      11      12

13      14      15      16




*/



#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    int iCnt=1;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",iCnt);
            iCnt++;
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("enter number of rows:");
    scanf("%d",&iValue1);

     printf("enter number of columns:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;


}
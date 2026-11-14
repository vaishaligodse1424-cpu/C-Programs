/*
Enter number of rows:3
Enter number of columns:6
1       2       3       4       5       6

7       8       9       1       2       3

4       5       6       7       8       9



*/




#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    int iNo=1;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",iNo);
            iNo++;
        
        if(iNo==10)
        {
            iNo=1;
        }
         }
        printf("\n\n");
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter number of rows:");
    scanf("%d",&iValue1);

    printf("Enter number of columns:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}
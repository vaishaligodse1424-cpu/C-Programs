/*
enter number of rows:4
enter number of columns:4

1       2       3       4
1       *       *       4
1       *       *       4
1       2       3       4

*/


#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(j==1)      
            {
                printf("1\t");        //1 print 
            }
            else if(j==iCol)      
            {
                printf("%d\t",iCol);    //4 print 
            }
            else if(i==1||i==iRow)
            {
                printf("%d\t",j);      
            }
            else
            {
                printf("*\t");

            }
           
        }
        printf("\n");
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
   return 0;

}
//Accept number from user and display below pattern.
//input: irow=4,icol=3
/*
  1 2 3
  1 2 3
  1 2 3
  1 2 3
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
 int icnt=0;
 int icnt1=0;

 
 for(icnt=1;icnt<=iRow;icnt++)
 {
    for (icnt1=1;icnt1<=iCol;icnt1++)
    {
        printf("%d\t",icnt1);
    }
    printf("\n");
 }  
}
int main()
{
   int ivalue=0;
   int ivalue1=0;

   printf("enter the rows:");
   scanf("%d",&ivalue);
   printf("enter the columns:");
   scanf("%d",&ivalue1);

    Pattern(ivalue,ivalue1);
    return 0;
}
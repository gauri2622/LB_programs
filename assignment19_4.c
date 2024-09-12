//ACCept number of rows and columns from user and display below pattern.
/*
input: irow=4  icol=4
output: 4 4 4 4
        3 3 3 3
        2 2 2 2
        1 1 1 1
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
 int icnt=0;
 int icnt1=0;
 

 
 for(icnt=iRow;icnt>=1;icnt--)
 {
    for (icnt1=1;icnt1<=iCol;icnt1++)
   
    {
        printf("%d\t",icnt);
        
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

//Accept number of rows and number of columns from user and display below pattern.
/*
input: irow=3 icol=5
output: A A A A A
        B B B B B
        C C C C C
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
 int icnt=0;
 int icnt1=0;
 char ch='A';

 
 for(icnt=1;icnt<=iRow;icnt++)
 {
    for (icnt1=1,ch='A';icnt1<=iCol;icnt1++)
   
    {
        printf("%c\t",ch);
        ch++;
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
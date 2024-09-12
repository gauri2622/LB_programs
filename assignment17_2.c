#include<stdio.h>

void Pattern(int ino)
{
 int icnt=0;
 
 for(icnt=ino;icnt>=1;icnt--)
 
 {
  printf("%d\t #\t",icnt);
  
 }
}
int main()
{
   int ivalue=0;

   printf("enter number of elements:");
   scanf("%d",&ivalue);

    Pattern(ivalue);
    return 0;
}
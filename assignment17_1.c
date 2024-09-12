#include<stdio.h>

void Pattern(int ino)
{
 int icnt=0;
 char ch= 'A';
 for(icnt=1;icnt<=ino;icnt++)
 
 {
  printf("%c\t",ch);
  ch++;
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
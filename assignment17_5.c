//Accept number from user and display below pattern.
//input: 8
//output: 2 4 6 8 10 12 14 16
#include<stdio.h>

void Pattern(int ino)
{
 int icnt=0;
 int inum=2;
 
 for(icnt=0;icnt<=ino;icnt++)
 {
    printf("%d\t",inum);
  inum=inum+2;
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
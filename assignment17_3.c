//Accept number from user and display below pattern.
//input: 5
//output: 1 # 2 # 3 # 4 # 5 #
#include<stdio.h>

void Pattern(int ino)
{
 int icnt=0;
 
 for(icnt=1;icnt<=ino;icnt++)
 
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
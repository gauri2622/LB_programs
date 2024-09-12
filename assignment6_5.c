//write a program which accept N and print first 5 multiples of N.
#include<stdio.h>

void MultipleDisplay(int ino)
{
   int i=1;
  
   do {
      if (i % 5 == 0) {
         printf("%d ", i);
      }
      i++;
   } while (i <= ino);
}
int main()
{
    int ivalue=0;
    printf("enter number:");
    scanf("%d",&ivalue);

    MultipleDisplay(ivalue);
    return 0;
}
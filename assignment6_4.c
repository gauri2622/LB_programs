//write a program which accepts N from user and print all odd numbers up to N.
#include<stdio.h>
void OddDisplay(int ino)
{
   int i=0;
   for(i=1;i<=ino;i++)
   {
      if(i%2!=0)
      {
         printf("%d\n",i);
      }
   }
   
   
}
int main()
{
   int ivalue=0;
   printf("enter number:");
   scanf("%d",&ivalue);

   OddDisplay(ivalue);
   return 0; 
}
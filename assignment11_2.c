//write a program which accept number from user and check whether it contains 0 in it or not.

#include<stdio.h>
#define true 1
#define false 0
typedef int bool;

bool chkzero(int ino)
{
   while(ino>0)
   {
    if(ino/10==0)
    ino++;
    ino=ino/10;

    return ino;
   }
}
int main()
{
      int ivalue=0;
      bool bret=false;

      printf("enter number");
      scanf("%d",&ivalue);

      bret=chkzero(ivalue);
      if(bret==true)
      {
        printf("it contains zero");

      } 
      else
      {
        printf("there is no zero");
      }
      return 0;
}
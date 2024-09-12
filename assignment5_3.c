//Write a program which accept two number and check whether numbers are equal or not.
#include<stdio.h>
typedef int bool;
#define true 1
#define false 0;

bool ChkEqual(int ino1,int ino2)
{
  if(ino1==ino2)
  {
    return true;
  }
  else{
    return false;
  }
 
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    bool bret= false;

    printf("enter two numbers:");
    scanf("%d %d",&ivalue1,&ivalue2);

    bret= ChkEqual(ivalue1,ivalue2);
    if (bret==true)
    {
        printf("equal");

    }
    else
    {
        printf("not equal");
    }
    return 0;
}
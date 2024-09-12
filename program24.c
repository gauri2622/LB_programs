#include<stdio.h>

int Minimum(int ino1 , int ino2)
{
   if(ino1 <ino2)
   {
    return ino1;
   }
   else{
    return ino2;
   }
    
}


int main()
{
  int ivalue1=0;
  int ivalue2=0;
  int iRet =0;

  printf("enter first number:\n");
  scanf("%d",&ivalue1);

  printf("enter second number:\n");
  scanf("%d",& ivalue2);
   
   iRet= Minimum(ivalue1 , ivalue2);

   printf("smalllest number is:%d\n",iRet);

    return 0;
}
#include<stdio.h>
 
 int  Maximum(int ino1,int ino2,int ino3)
 {
  if((ino1>= ino2) && (ino1>= ino3))
  { return ino1;
  }

  else if((ino2>=ino1)&& (ino2>=ino3))
  {
    return ino2;
  }  
  else{
    return ino3;
  }
 }
int main()
{
   int ivalue1=0;
   int ivalue2=0;
   int ivalue3=0;
   int  iRet=0;

   printf("enter first number:\n");
   scanf("%d",&ivalue1);

   printf("enter second number:\n");
   scanf("%d",&ivalue2);

  printf("enter third number:\n");
   scanf("%d",&ivalue3);

   iRet = Maximum(ivalue1,ivalue2,ivalue3);
  

printf(" largest number  is:%d",iRet);



    return 0;
}
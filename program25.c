#include<stdio.h>
 
 float Average(int ino1,int ino2,int ino3)
 {

    float fAns= 0.0f;
    fAns= ((float) (ino1+ino2+ino3)/3);
    return fAns;
 }
int main()
{
   int ivalue1=0;
   int ivalue2=0;
   int ivalue3=0;
   float fRet=0.0f;

   printf("enter first number:\n");
   scanf("%d",&ivalue1);

   printf("enter second number:\n");
   scanf("%d",&ivalue2);

  printf("enter third number:\n");
   scanf("%d",&ivalue3);

   fRet = Average(ivalue1,ivalue2,ivalue3);
  

printf(" average is:%f",fRet);



    return 0;
}
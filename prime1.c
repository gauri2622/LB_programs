#include<stdio.h>
#include<stdbool.h>

bool checkprime(int ino)
{
   int icnt=0;
bool bFlag=true;
   if(ino<0) //updator
   {
    ino= -ino;
   }
   for(icnt=2;icnt<=(ino/2);icnt++)
   {
     if((ino%icnt)==0)
     {
        bFlag= false;
        break;
     }
   }
   return bFlag;
}
int main()
{
   int ivalue=0;
   bool bRet=false;
   printf("enter the number\n");
   scanf("%d",&ivalue);
   bRet=checkprime(ivalue);
   if(bRet==true)
   {
    printf("%d is a prime number\n",ivalue);
   }
   else{
    printf("%d is a not prime number\n",ivalue);
   }
   
    return 0;
}
#include<stdio.h>

void DisplayDigit(int ino)
    {
   int icnt=1;
   
   
}

void sumFactorsR(int ino)
    {
  static int icnt=1;
  static int isum=0;
    
   if(ino!=0)
   {
   
    idigit=ino%10;
    isum=isum+idigit;
    ino=ino/10;
    sumFactorsR(ino);
   }
   return isum;
}

int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter the number:\n");
    scanf("%d",&ivalue);
   
   iret=sumFactorsR(ivalue);
   printf("Addition of factors is:%d\n",iret);
    
    
    return 0;
}
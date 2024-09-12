#include<stdio.h>

void sumFactors(int ino)
    {
   int icnt=1;
   int isum=0;
   
   { 
   while(icnt<=(ino/2))
   {
    if((ino%icnt)==0)
   
    {
        isum=isum+icnt;
     
    }
    icnt++;
   }
   return isum;
   }
}

void sumFactorsR(int ino)
    {
  static int icnt=1;
  static int isum=0;
    
   if(icnt<=(ino/2))
   {
   if((ino%icnt)==0)
    {
        isum=isum+icnt;
        
    }
    icnt++;
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
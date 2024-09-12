#include<stdio.h>

void Factors(int ino)
    {
   int icnt=1;
   
   { 
   while(icnt<=(ino/2))
   {
    if((ino%icnt)==0)
   
    {
        printf("%d\n",icnt);
     
    }
    icnt++;
   }
   }
}

void FactorsR(int ino)
    {
  static int icnt=1;
    
   if(icnt<=(ino/2))
   {
   if((ino%icnt)==0)
    {
        printf("%d\n",icnt);
        
    }
    icnt++;
    FactorsR(ino);
   }
}

int main()
{
    int ivalue=0;

    printf("Enter the number:\n");
    scanf("%d",&ivalue);

    FactorsR(ivalue);
    
    return 0;
}
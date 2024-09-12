#include<stdio.h>

void DisplayI()
    {
   int icnt=1;
    

    while(icnt<=5)
    {
        printf("*\t");
        icnt++;
        
    }
}

void DisplayR()
    {
  static int icnt=1;
    

   if(icnt<=5)
    {
        printf("*\t");
        icnt++;
        DisplayR();
        
    }
}

int main()
{
    DisplayR();
    
    return 0;
}
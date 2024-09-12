#include<stdio.h>

void DisplayI()
    {
   int icnt=1;
    

    while(icnt<=5)
    {
        printf("%d\n",icnt);
        icnt++;
        
    }
}

void DisplayR()
    {
  static int icnt=1;
    

   if(icnt<=5)
    {
        printf("%d\n",icnt);
        icnt++;
        DisplayR();
        
    }
}

int main()
{
    DisplayR();
    
    return 0;
}
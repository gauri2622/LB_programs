#include<stdio.h>

void DisplayI(int ino)
    {
   int icnt=1;
    

    while(icnt<=ino)
    {
        printf("%d\n",icnt);
        icnt++;
        
    }
}

void DisplayR(int ino)
    {
  static int icnt=1;
    

   if(icnt<=ino)
    {
        printf("%d\n",icnt);
        icnt++;
        DisplayR(ino);
        
    }
}

int main()
{
    DisplayR(4);
    
    return 0;
}
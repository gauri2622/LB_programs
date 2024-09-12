#include<stdio.h>

void DisplayI()
{
    int icnt=1;
    

    while(icnt<=4)
    {
        printf("jay ganesh\n");
        icnt++;
    }
}

  void DisplayR()
  {
   static int icnt=1;
    

    if(icnt<=4)
    {
        printf("jay ganesh\n");
        icnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}
// Non liner pattern
/*
 * * * *
 * * * *
 * * * *
*/

#include<stdio.h>
void Display()
{
  int icnt=0;
  int icnt1=0;
  for(icnt=1;icnt<=3;icnt++)
  {

  for(icnt1=1;icnt1<=4;icnt1++)
    
    {
        printf("*\t");
    }
    printf("\n");
  }
    
}
int main()
{
    
    Display();

    return 0;
}


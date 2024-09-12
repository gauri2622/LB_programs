// *  *  *  *  * * 
// display 6 * on screen. 
#include<stdio.h>
void Display(int ino)
{
  int icnt=0;
  for(icnt=1;icnt<=ino;icnt++)
  {
    printf("*\t");
  }
  printf("\n");
}
int main()
{
    int ivalue=0;
    printf("enter the number you want:");
    scanf("%d",&ivalue);
    Display(ivalue);

    return 0;
}
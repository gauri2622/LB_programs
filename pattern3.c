//input: 6
//output:  0 1 2 3 4 5 6
// *  *  *  *  * * 
// display 6 * on screen. 
#include<stdio.h>
void Display(int ino)
{
  int icnt=0;
  for(icnt=0;icnt<=ino;icnt++)
  {
    printf("%d\t",icnt);
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
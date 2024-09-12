//input: 4
//output:   1 # 2 # 3 # 4 #
#include<stdio.h>
void Display(int ino)
{
  int icnt=0;
  for(icnt=1;icnt<=ino;icnt++)
  {
    printf("%d\t#\t",icnt);
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
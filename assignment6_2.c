// write a program which accept number from user and print numbers till that number.
#include<stdio.h>

void display(int ino)
{
int i=0;
for(i=1;i<=ino;i++)
{
    printf("%d\n",i);
}
}
int main()
{
  int ivalue=0;
  printf("enter number:");
  scanf("%d",&ivalue);
  display(ivalue);
    return 0;
}
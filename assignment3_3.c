//write a program which accepts number from user and print even factor of that number.
#include<stdio.h>

void DisplayFactor(int ino)
{
    int i=0;

    if(ino<=0)
    {
        ino=-ino;
    }
    for(i=1;i<=ino;i++)
    {
        if((ino%i)==0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
  int ivalue=0;
  printf("enter number\n");
  scanf("%d",&ivalue);

  DisplayFactor(ivalue);
    return 0;
}
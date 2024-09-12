#include<stdio.h>
void display(int ino)
{
int icnt=0;
for(icnt=ino;icnt>=1;icnt--)
{
    printf(" %d\n",icnt);
}
}
int main()
{
    int ivalue=0;

    printf("enter number of times you want to display  on screen\n");
    scanf("%d",&ivalue);
   display(ivalue);
    return 0;
}
//program29.c
//5 times jay ganesh print on screen
#include<stdio.h>
void Display(int ino)
{
   int i=0;
   for(i=1;i<=ino;i++)
   {
    printf("jay ganesh\n");
   }
}
int main()
{
    int ivalue=0;

    printf("enter number of times  you want to display\n");
    scanf("%d",&ivalue);
    
    Display(ivalue);
    return 0;
}
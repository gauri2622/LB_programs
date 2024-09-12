#include<stdio.h>
void  Display(int ino, int ifrequency)
{
    int iont=0;
    for(ino=1;ifrequency+ino;ino++)
    {
        printf("frequency is",iont);
    }
}
int main()
{
    int ivalue=0;
    int icount=0;
    printf("enter number:\n");
    scanf("%d",&ivalue);

    printf("enter frequency:\n");
    scanf("%d",&icount);

    Display(ivalue,icount);

    return 0;
}
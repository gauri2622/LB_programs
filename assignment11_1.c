//write a program which accept number from user and display its digit in reverse order. 
#include<stdio.h>
void DisplayDigit(int ino)
{
    int idigit=0;
    int isum=0;
    if(ino<0)
    {
        ino=-ino;
    }
    while(ino!=0)

    {
        idigit=ino%10;
        printf("%d",idigit);
        ino=ino/10;
    }
}
int main()
{
    int ivalue=0;
    printf("enter number");
    scanf("%d",&ivalue);

    DisplayDigit(ivalue);
    return 0;
}
//write a program which accept number from user and count frrquency of such a digit which are less than 6.

#include<stdio.h>

int count(int ino)
{
    int icount = 0;
    int digit=0;

    while (ino > 0) {
        digit = ino % 10;
        if (digit <6) {
            icount++;
        }
        ino /= 10;
    } 
    return icount;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter number:");
    scanf("%d",&ivalue);

    iret=count(ivalue);

    printf("%d",iret);
    
    return 0;
}
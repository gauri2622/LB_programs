//write a program which accept number from user and count frequency of 4 in it.

#include<stdio.h>
int countFour(int ino)
{
   int icount = 0;
    int digit=0;

    while (ino > 0) {
        digit = ino % 10;
        if (digit == 4) {
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

    iret=countFour(ivalue);
printf("the frequency of the digit 4 in number is :%d\n ",iret);
    return 0;
}
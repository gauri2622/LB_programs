//write a program which accept number from user and count frequency of 2 in it.

#include<stdio.h>
int counttwo(int ino)
{
   int icount = 0;
    int digit=0;

    while (ino > 0) {
        digit = ino % 10;
        if (digit == 2) {
            icount++;
        }
        ino /= 10;
    }

    return icount;
}
int main()
{

    int ivalue=0;
    int bret=0;

    printf("enter number:");
    scanf("%d",&ivalue);

    bret=counttwo(ivalue);
printf("the frequency of the digit 2 in number is%d\n ",bret);
    return 0;
}
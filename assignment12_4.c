//write a program which accept number from user and return multiplication of all digit.

#include<stdio.h>
int MulDigits(int ino)
{
    int idigit=0;
    int no=0;
    while (ino!=0)
    {
       idigit=ino%10;
       no=idigit*ino;
       ino=ino/10;
    }
    return no;
    
}

int main()
{

    int ivalue=0;
    int iret=0;

    printf("enter number:");
    scanf("%d",&ivalue);
    iret=MulDigits(ivalue);

    printf("%d",iret);

    return 0;
}
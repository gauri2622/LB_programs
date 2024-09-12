//write a program which accept numbre from user and return the  count of even.

#include<stdio.h>
int counteven(int ino)
{
    int icount=0;
    int i=0;
   if (icount < 0) 
   {
        return 1;
    }

    for (int i = 1; i <= icount; i++) {
        if (i % 2 == 0) 
        {
            icount++;
        }
}
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter number:");
    scanf("%d",&ivalue);

    iret=counteven(ivalue);

    printf("%d",iret);

    return 0;
}
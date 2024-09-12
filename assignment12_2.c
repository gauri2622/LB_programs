//write a program which accept number from user and return the count of odd. 

#include<stdio.h>
int countodd(int ino)
{
    int  num,count=0;
    int i=0;
   if (num < 0) 
   {
        printf("Please enter a positive number.\n");
        return 1;
    }

    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0)
         {
            count++;
        }
    }
}


int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter number");
    scanf("%d",&ivalue);

    iret=countodd(ivalue);

    printf("%d",iret);

    return 0;
}

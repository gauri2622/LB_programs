//write a program which accept one number from user and check whether that number is greater than 100 or not
#include<stdio.h>
typedef int bool;
#define true 1
#define false 0
bool ChkGreater(int ino)
{
    int i=0;
    if(i<=100)
    {
       return ino;
    }
    
    
}
int main()
{
    int ivalue=0;
    bool bret=false;
    printf("enter number:");
    scanf("%d",&ivalue);

    bret=ChkGreater(ivalue);

    if(ivalue==true)
    {
        printf("smaller");

    }
    else
    {
        printf("greater");
    }
    return 0;
}
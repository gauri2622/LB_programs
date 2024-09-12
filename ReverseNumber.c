//accept number from user and that number is reverse .
#include<stdio.h>
int reverse(int ino)
{
    int idigit=0;
    int irev=0;

    while (ino!=0)
    {
        idigit=ino%10;
        ino=ino/10;
        irev=(irev*10)+idigit;
    }
    return irev;
    
}
int main()
{

    int ivalue=0;

    printf("enter number:");
    scanf("%d",&ivalue);

    int iret=reverse(ivalue);

    printf("reverse number is:%d",iret);

    return 0;
}
//check the number is palendrome or not.
#include<stdio.h>
#include<stdbool.h>

int checkpalindrome(int ino)
{
    int idigit=0;
    int irev=0;
    int icopy=ino; //xerox kadhli ino chi.

    while (ino!=0)
    {
        idigit=ino%10;
        ino=ino/10;
        irev=(irev*10)+idigit;
    }
    return(irev==icopy);
}
int main()
{

    int ivalue=0;

    printf("enter number:");
    scanf("%d",&ivalue);

   bool iret=checkpalindrome(ivalue);
    
    if(iret==true)
    {
        printf("%d is a palindrome number\n",ivalue);
    }
    else
    {
        printf("%d is not a palindrome number\n",ivalue);
    }
    return 0;
}
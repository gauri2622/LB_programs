#include<stdio.h>
typedef int bool;
#define true 1
#define false 0

 int check(int ino)
 {
    if((ino % 5)==0)
    { return true;
    }
    else
    {
        return false;
    }
 }
int main()
{
    int ivalue =0;
    bool bRet=false;

    printf(" enter number\n");
    scanf ("%d", &ivalue);

    bRet=check(ivalue);
    if(bRet==true)
    {
        printf("dividible by 5\n");
    }
    else
    {
        printf("not divisible by 5\n");
    }
    
    return 0;
}
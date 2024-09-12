
#include<stdio.h>
#include<stdbool.h>

bool checkeven(int ino)
{

    if((ino%2) ==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int ivalue=0;
    bool bRet= false;

    printf(" enter number:\n");
    scanf("%d",&ivalue);

    bRet = checkeven(ivalue);

    if(bRet==true)
    {
        printf( "%d is an even number\n",ivalue);

    }
    else{
        printf("%d is an odd number\n",ivalue);
    }

    return 0;
}
#include<stdio.h>
#include<stdbool.h>

bool checkeven(int ino1,int ino2)
{
    if((ino1%ino2)==0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    bool bret=false;
    int ivalue1=0,ivalue2=0;

    printf("enter first number\n");
    scanf("%d",&ivalue1);

     printf("enter second number\n");
    scanf("%d",&ivalue2);

    bret = checkeven(ivalue1,ivalue2);

    if(bret==true)
    {
        printf("%d is a factor of%d\n",ivalue2,ivalue1);

    }
    else{
        printf("%d is not a factor of %d\n",ivalue2,ivalue1);
    }

   return 0;

}
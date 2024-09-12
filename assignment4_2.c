//write a program which accepts number from user and display its factors in decreasing order.

#include<stdio.h>

void FactRev(int ino)
{
    int i=0;
    for(i=1;i<=ino;++i) 
    {
        if(ino%i==0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int ivalue=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    FactRev(ivalue);

    return 0;
}
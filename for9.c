#include<stdio.h>

int display(int ino)
{
    int icnt=0;
    int isum=0;
    for(icnt=1;icnt<=(ino/2);icnt++)
    {
    if((ino% icnt)==0)
    {
        isum=isum+icnt;
    }
    }
    return isum;

}


int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    iret =display(ivalue);
    printf("sum of factor are:%d\n",iret);
  
    return 0;
}
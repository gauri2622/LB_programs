#include<stdio.h>
#include<stdbool.h>
bool checkperfect(int ino)
{
    int icnt=0;
    int isum=0;

    if(ino<0)   //updator
    {
        ino= -ino;
    }
    for(icnt=1;icnt<=(ino/2);icnt++)
    {
    if((ino% icnt)==0)
    {
        isum=isum+icnt;
    }
    }
    if(isum==ino)
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
    bool bret=false;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    bret =checkperfect(ivalue);
    if(bret==true)
    {
    printf("%d is a perfect numbwer\n",ivalue);
    }
    else
    {
        printf("%d is a not perfect number\n",ivalue);
    }
  
    return 0;
}
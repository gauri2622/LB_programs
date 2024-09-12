//write a program which accept number from user and display all its non factors.

#include<stdio.h>
void nonfact(int ino)
{
    int icnt=0;
for(icnt=1;icnt!=ino;icnt++)
{
    if(ino%icnt==0)
    {
       printf(" %d\n",icnt);
    }
    
}
}
int main()
{
    int ivalue=0;
    printf("enter number:\n");
    scanf("%d",&ivalue);

    nonfact(ivalue);
    return 0;
}
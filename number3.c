#include<stdio.h>
#include<stdbool.h>
void displayfactors(int ino)
{
    int icnt=0;
    printf("factor of %d are:\n",ino);
    for(icnt=1;icnt<ino;icnt++)
    {
        if((ino%icnt)==0)
        {
            printf("%d\n",icnt);
        }
    }
}


int main()
{

    int ivalue=0;

    printf("enter the number:\n");
    scanf("%d",&ivalue);
    displayfactors(ivalue);
    return 0;
}
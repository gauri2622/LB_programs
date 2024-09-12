#include<stdio.h>
#include<stdbool.h>
void displayfactors(int ino)
{
 if((ino%1)==0)
 { printf("1");}
 if((ino%2)==0)
 { printf("2");}
 if((ino%3)==0)
 { printf("3");}
 if((ino%4)==0)
 { printf("4");}
 if((ino%5)==0)
 { printf("5");}
 if((ino%6)==0)
 { printf("6\n");}
}


int main()
{

    int ivalue=0;

    printf("enter the number:\n");
    scanf("%d",&ivalue);
    displayfactors(ivalue);
    return 0;
}
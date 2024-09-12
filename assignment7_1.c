//write a program which accept number from user and if number is less than 50 then print small,if it is greater than 50 and less than 100 then print medium,if it is grater than 100 then print lagre

#include<stdio.h>
void number(int ino)
{
    int icnt=0;
    if(icnt<=50)
    {
     printf("small");

    }
   else if (icnt>50||icnt<100)
   {
    printf("medium");
   }
   else{
    printf("large");
   }
   
}
int main()
{
    int ivalue=0;
    printf("enter number:");
    scanf("%d",&ivalue);

    number(ivalue);
    return 0;
}

// accept single digit number from user and print it into word
#include<stdio.h>
void display(int ino)
{
     switch(ino)
     {
          case 0:
               printf("ZERO");
               break;
          case 1:
               printf("ONE");
               break;
          case 2:
               printf("TWO");
               break;
          case 3:
               printf("THREE");
               break;
          case 4:
               printf("FOUR");
               break;
          case 5:
               printf("FIVE");
               break;
          case 6:
               printf("SIX");
               break;
          case 7:
               printf("SEVEN");
               break;
          case 8:
               printf("EIGHT");
               break;
          case 9:
               printf("NINE");
               break;
          default:
               printf("invalid number");
     }
     
}
int main()
{
    int ivalue=0;
    printf("enter number:");
    scanf("%d",&ivalue);

    display(ivalue);
    return 0;
}
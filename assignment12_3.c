//write a program which accept number from user and return the count of digits in between 3 and 7

#include<stdio.h>
int countrange(int num)
{
    int count=0;
    
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        int digit =num % 10;
        if (digit >= 3 && digit <= 7) {
            count++;
        }
        num /= 10;
    }

}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter number");
    scanf("%d",&ivalue);

    iret=countrange(ivalue);

    printf("%d",iret);

    return 0;
}
//write a program which accept number from user and return difference between summation of even digit and summation of odd digits.

#include<stdio.h>

int CountDiff(int ino)
{
    int num=0;
 int even=0;
 int odd=0;

 if (num< 0) {
       num = -num;
    }

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            even += digit;
        } else {
            odd += digit;
        }
       num /= 10;
       ino=even-odd;
    }
    
    return ino;
}

int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter number");
    scanf("%d",&ivalue);
    iret=CountDiff(ivalue);

    printf("%d",iret);

    return 0;

}
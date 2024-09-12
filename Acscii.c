#include<stdio.h>

int main()
{

    char ch ='\0';

    printf("enter the character:\n");
    scanf("%c",&ch);

    printf("ASCII value of the character in decimal is:%d\n",ch);
    printf("ASCII value of the character in octal is:%o\n",ch);
    printf("ASCII value of the character in hexadecimal is:%x\n",ch);

    return 0;
}
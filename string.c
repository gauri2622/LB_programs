#include<stdio.h>

int main()
{
    char Arr[20];
     
     printf("enter the string\n");
     //gets(Arr);
     scanf("%[^'\n']s",Arr);
    

     printf("entered string is:%s\n",Arr);
    return 0;
}
#include<stdio.h>
void display(char *str) // str[] also used
{
    printf("string is:%s\n",str);
}
int main()
{
    char Arr[20];
     
     printf("enter the string\n");
     //gets(Arr);
     scanf("%[^'\n']s",Arr);
    
   display(Arr);
     
    return 0;
}
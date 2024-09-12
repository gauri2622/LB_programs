#include<stdio.h>
int strlen(char str[]) // str[] also used
{
    int icnt=0;
    while(*str!='\0')
    {
    if(*str=='a')
    {
        icnt++;
       
    }
    str++;
    }
   return icnt;
}
int main()
{
    char Arr[20];
    int iret=0;
     
     printf("enter the string\n");
     //gets(Arr);
     scanf("%[^'\n']s",Arr);
    
    iret=strlen(Arr);
    printf("length of string is:%d\n",iret);

     
    return 0;
}
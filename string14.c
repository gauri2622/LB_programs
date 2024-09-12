#include<stdio.h>
#include<stdbool.h>

void strupr(char str[] ) // str[] also used
{
    int icnt=0;
    while(*str!='\0')
    {
    if(*str>='a'&& *str<='z') 
    {
          *str=*str-32;
       
    }
    str++;
    }
   
}
int main()
{
    char Arr[20];

     
     printf("enter the string\n");
     //gets(Arr);
     scanf("%[^'\n']s",Arr);
     
     
    
       strupr(Arr);
    printf("letters  is:%s\n",Arr);

   
    
    return 0;
}
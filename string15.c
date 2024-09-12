#include<stdio.h>
#include<stdbool.h>

void strtgl(char str[] ) // str[] also used
{
    int icnt=0;
    while(*str!='\0')
    {
    if(*str>='a'&& *str<='z') 
    {
          *str=*str-32;
       
    }
    else if(*str>='A' && *str<='Z')
    {
        *str=*str+32;
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
     
     
    
       strtgl(Arr);
    printf("letters  is:%s\n",Arr);

   
    
    return 0;
}
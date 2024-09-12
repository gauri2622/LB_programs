#include<stdio.h>
#include<stdbool.h>

int countdigit(char str[] ) // str[] also used
{
    int icnt=0;
    while(*str!='\0')
    {
    if((*str>='0')&& (*str>='9')) 
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
    char cvalue='\0';
   int iret=0;
     
     printf("enter the string\n");
     //gets(Arr);
     scanf("%[^'\n']s",Arr);
     
     
    
    iret=countdigit(Arr);
    printf("frequency of digit is:%d\n",iret);

   
    
    return 0;
}
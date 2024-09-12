#include<stdio.h>
#include<stdbool.h>

int countspace(char str[] ) // str[] also used
{
    int icnt=0;
    while(*str!='\0')
    {
    if(*str==' ') 
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
     
     
    
    iret=countspace(Arr);
    printf("frequency of space is:%d\n",iret);

   
    
    return 0;
}
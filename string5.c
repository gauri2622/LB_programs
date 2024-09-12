#include<stdio.h>
#include<stdbool.h>

int countsmall(char str[] ) // str[] also used
{
    int icnt=0;
    while(*str!='\0')
    {
    if((*str>='a') && (*str<='z'))
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
     
     
    
    iret=countsmall(Arr);
    printf("frequency of small letter is:%d\n",iret);

   
    
    return 0;
}
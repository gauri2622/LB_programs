#include<stdio.h>
#include<stdbool.h>

int countcapital(char str[] ) // str[] also used
{
    int icnt=0;
    while(*str!='\0')
    {
    if((*str>='A') && (*str<='Z'))
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
     
     
    
    iret=countcapital(Arr);
    printf("frequency of small letter is:%d\n",iret);

   
    
    return 0;
}
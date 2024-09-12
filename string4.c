#include<stdio.h>
#include<stdbool.h>

int count(char str[] ,char ch) // str[] also used
{
    int icnt=0;
    while(*str!='\0')
    {
    if(*str==ch)
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
     
     printf("enter the charater of frequency calculation:\n");
     scanf(" %c",&cvalue);
    
    iret=count(Arr,cvalue);
    printf("frequency of charater is:%d\n",iret);

   
    
    return 0;
}
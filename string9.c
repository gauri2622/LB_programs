#include<stdio.h>
#include<stdbool.h>

int countvowel(char str[] ) // str[] also used
{
    int icnt=0;
    while(*str!='\0')
    {
    if((*str=='a')||*str=='e'||*str=='i'||*str=='o'||*str=='u' || *str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U') 
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
     
     
    
    iret=countvowel(Arr);
    printf("frequency of vowel is:%d\n",iret);

   
    
    return 0;
}
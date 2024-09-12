#include<stdio.h>
#include<stdbool.h>

void ReplaceVowel(char str[] ) // str[] also used
{
   
    while(*str!='\0')
    {
    if((*str=='a')||*str=='e'||*str=='i'||*str=='o'||*str=='u'| *str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U') 
    {
        *str='_';
       
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
     
     
    
    ReplaceVowel(Arr);
    printf("updated string is:%s\n",Arr);

   
    
    return 0;
}
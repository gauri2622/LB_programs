#include<stdio.h>

char convertcapital(char cvalue)
{
    
    return cvalue-32;

}
int main()
{

    char ch='\0';
    char cret='\0';

    printf("enter the character\n");
    scanf("%c",&ch);
    
    cret=convertcapital(ch);

    printf("converted capital letter is:%c\n",cret);


    return 0;

    }
#include<stdio.h>

char convertsmall(char cvalue)
{
    return cvalue+32;
    

}
int main()
{

    char ch='\0';
    char cret='\0';

    printf("enter the character\n");
    scanf("%c",&ch);
    
    cret=convertsmall(ch);

    printf("converted small letter is:%c\n",cret);


    return 0;

    }
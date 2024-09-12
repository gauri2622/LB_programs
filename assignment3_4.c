//Accepts one character from user and convert case of that character.
#include<stdio.h>
#include<ctype.h>
void DisplayConvert(char cvalue)
{
    if(isalpha(cvalue))
    {
        cvalue=toupper(cvalue);
        printf("%c",cvalue);
    }
    else if(isalpha(cvalue))
    
    {
        cvalue=towlower(cvalue);   
        printf("%c",cvalue);
    }
}
int main()
{
    char cValue='\0';

    printf("enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}
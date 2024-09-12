#include<stdio.h>
#include<stdbool.h>

bool checksmall(char cvalue)
{
    if((cvalue>='a')&& (cvalue<='z'))  // 65 & 90 chya yevji 'A' 'Z' pn lihu shkto.
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    char ch='\0';
    bool bret=false;

    printf("enter the character\n");
    scanf("%c",&ch);
    
    bret=checksmall(ch);
    if(bret==true)
    {
        printf("its  a small letter\n");
    }
    else
    {
        printf("its not a small letter\n");
    }

    return 0;

    }
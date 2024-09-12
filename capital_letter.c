#include<stdio.h>
#include<stdbool.h>

bool checkcapital(char cvalue)
{
    if((cvalue>=65)&& (cvalue<=90))  // 65 & 90 chya yevji 'A' 'Z' pn lihu shkto.
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
    
    bret=checkcapital(ch);
    if(bret==true)
    {
        printf("its  a capital letter\n");
    }
    else
    {
        printf("its not a capital letter\n");
    }

    return 0;

    }
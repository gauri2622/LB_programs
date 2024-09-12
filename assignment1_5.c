#include<stdio.h>

void Accept(int ino)
{
    int iCnt=0;
    for( iCnt=1;iCnt<=ino;iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int ivalue =0;
    ivalue=5;
    printf("enter the number\n");
    scanf("%d",&ivalue);

    Accept (ivalue); 
    return 0;
}
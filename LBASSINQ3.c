#include<stdio.h>

void NonFactors(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d ",iCnt);
        }
    } 
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d",&iValue);
    
    NonFactors(iValue);
    
    return 0;
}

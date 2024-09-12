#include <stdio.h>

int factdiff(int ino)  
{
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= ino; i++) 
    {
        if (ino % i == 0)
        {
            sum1 += i;
        }
        else
        {
            sum2 += i;
        }
    }
     return sum2 - sum1;
}

int main() 
{
    int ivalue = 0;
    int iret = 0;    
    
    printf("Enter a number : ");
    scanf("%d", &ivalue);
    iret = factdiff(ivalue);

    printf("%d",iret);
   
    
    return 0;
}

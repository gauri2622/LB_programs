//write a program which accept number from user and return summation of all its non factors.

#include <stdio.h>

int sumnonfactor_sum(int ino) 
{
    int sum = 0;
    for (int i = 1; i <= ino; i++) 
    {
        if (ino % i != 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main() 
{
    int ivalue = 0;
    int iret = 0;    
    
    printf("Enter a number : ");
    scanf("%d", &ivalue);
    iret =  sumnonfactor_sum(ivalue);

    printf("%d",iret);
    
    return 0;
}

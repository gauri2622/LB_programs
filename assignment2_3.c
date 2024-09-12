#include<stdio.h>
void Display(int ino)
{
    if(ino<10)
    {
        printf("Hello");
    }
    else{
        printf("Demo");
    }
}
int main()
{
    int ivalue=0;
    printf("enter number:\n");
    scanf("%d",&ivalue);
    Display(ivalue);
    

    return 0;
}
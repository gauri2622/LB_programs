//Write a program which accept three numbers and print its multiplication.
#include<stdio.h>
int multiply(int a,int b,int c)
{
    int ans=0;
    ans=a*b*c; 
    return ans;
    
}
int main()
{
    int ivalue1=0,ivalue2=0,ivalue3=0,iret=0;
    printf("enter three numbers:");
    scanf("%d %d %d",&ivalue1,&ivalue2,&ivalue3);

    iret= multiply(ivalue1,ivalue2,ivalue3);
    printf("multiplication is %.2d:",iret);

    return 0;
}
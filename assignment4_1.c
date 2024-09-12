//write a program which accept number from user and display its multiplication of factors.
#include<stdio.h>
 int MultFact(int ino)
 {
    int icnt=0;
    int imult=0;
    for(icnt=1;icnt<=(ino/2);icnt++)
    {
    if((ino%icnt)==0)
    {
        imult=imult*icnt;
    
    }
    return imult;
}
 }
 
int main()
{
    int ivalue=0;
    int iret=0;
     
     printf("enter number\n");
     scanf("%d",&ivalue);

     iret=MultFact(ivalue);

     printf("%d",iret);
    return 0;
}
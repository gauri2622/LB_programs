//write a program which accepts one number from user and print that number of even number on screen.
#include<stdio.h>
#include<stdbool.h>
 
  bool PrintEven(int ino)
   
 {
  int i=0;
    if(ino<=0)
    {
        ino=-ino;
     }
      for(i=1;i<ino;i++)
      {
        if(ino%2==0)
      
      {
        printf("%d is a even number",i);
      }
      }

 }
int main()
{
    int ivalue=0;
    bool bret=false;
    printf("enter number\n");
    scanf("%d",&ivalue);

     bret=PrintEven(ivalue);
    
    return 0;
}
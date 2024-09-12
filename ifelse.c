#include<stdio.h>
  
void DisplayExamTime(int iStandard)
{
    if(iStandard==1)
    {
      printf("exam at 8AM\n");
    }
    else if(iStandard==2)
    {
     printf("exam at 9AM\n");
    }
    else if(iStandard==3)
    {
      printf("exam at 10 AM\n");
    }
    else if(iStandard==4)
    {
      printf("exam at 11 AM\n");
    }
    else if(iStandard==5)
    {
      printf("exam at 12 PM\n");
    }
    else{
        printf("invalid input...\n");
    }
}

int main()
{
 auto int ivalue=0;

  printf("Enter your standard:\n");
  scanf("%d",&ivalue);

  DisplayExamTime(ivalue);
 return 0;    
}
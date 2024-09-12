#include<stdio.h>
  
void DisplayExamTime(int iStandard)
{
     switch (iStandard)
     {
        case 1:
        printf("your exam is at 8 AM\n");
        break;

        case 2:
        printf("Your exam at 9 AM\n");
        break;

        case 3: 
        printf("Your exam at 10AM\n");
        break;

        case 4:
        printf("Your exam at 11AM\n");
        break;

        case5: 
        printf("Your exam at 12 PM\n");
        break;

        default:
        printf("wrong input..\n");
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
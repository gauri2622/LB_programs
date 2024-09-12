//accept  rows and coumns to user.
// Non liner pattern
/*
 1 1 1 1
 1 1 1 1
 1 1 1 1
*/

#include<stdio.h>
void Display(int ivalue1,int ivalue2)
{
  int icnt=0;
  int icnt1=0;
  for(icnt=1;icnt<=ivalue1;icnt++)
  {

  for(icnt1=1;icnt1<=ivalue2;icnt1++)
    
    {
        printf("1\t");
    }
    printf("\n");
  }
    
}
int main()
{
    int ino1=0,ino2=0;
    printf("enter the rows:\n");
    scanf("%d",&ino1);

    printf("enter the columns:\n");
    scanf("%d",&ino2);
  
  Display(ino1,ino2);

    return 0;
}


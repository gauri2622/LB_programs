//accept  rows and coumns to user.
// Non liner pattern
/*
 1 2 3 4
 1 2 3 4
1 2 3 4
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
        printf("%d\t",ivalue2);
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


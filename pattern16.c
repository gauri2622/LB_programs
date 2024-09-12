//accept  rows and coumns to user.
// Non liner pattern
/*
 1 2 3 4
 * * * *
 1 2 3 4
 * * * * 
*/

#include<stdio.h>
void Display(int iRow,int iCol)
{
  int icnt=0;
  int icnt1=0;
  for(icnt=1;icnt<=iRow;icnt++)
  {

  for(icnt1=1;icnt1<=iCol;icnt1++)
    
    {
        if((icnt%2)==0)
        {
            printf("*\t");
        }
        else{
            printf("%d\t",icnt1);
        }
        
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


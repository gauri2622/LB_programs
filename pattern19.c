//accept  rows and coumns to user.
// Non liner pattern
/*
 # * * * 
 * # * *
 * * * #
 
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
        if(icnt==icnt1)
        {
            printf("#\t");
        }
        else{
            printf("*\t");
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


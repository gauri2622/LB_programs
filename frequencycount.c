#include<stdio.h>
#include<stdlib.h>
int frequency(int Arr[],int isize, int ivalue2)
{
  int icnt=0;
  int ifrequency=0;
  for(icnt=0;icnt<isize;icnt++)
  {
    if(Arr[icnt]==ivalue2)
    {
        ifrequency++;
    }
  }
    return ifrequency;
  }
  
int main()
{
    int icount=0;
    int *ptr=NULL;
    int icnt=0;
    int iret=0;
    int ivalue=0;

    printf("enter number of elements that you want :\n");
    scanf("%d",&icount);

    ptr=(int*)malloc(icount *sizeof(int));
    printf("dyanamic memory gets aloocated...");

    printf("enter the elements:\n");
    for(icnt=0;icnt<icount;icnt++)
    {
        printf("enter the elements no %d:",icnt+1);
        scanf("%d",&ptr[icnt]);
        
    }
    printf("enter the elements that you want to search:\n");
    scanf("%d",&ivalue);

     iret = frequency(ptr,icount,ivalue);
   printf("%d occurs %d times\n",iret); 
    free(ptr);
    printf("dyamic gets deallocated...\n");
    return 0;
}
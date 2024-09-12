#include<stdio.h>  // for printd and scanf
#include<stdlib.h>// for malloc and free
void display(int arr[], int isize)
{
    int icnt=0;
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("%d",arr[icnt]);

    }
    printf("\n");
}
int main()
{
   int icount=0;
   int *ptr=NULL;
   int icnt=0;
   printf("enter number");
   scanf("%d",&icount);

    ptr= (int *)malloc(icount*sizeof(int));

  printf("enter the elements\n");
  for(icnt=0;icnt<=icount;icnt++)
  {
    scanf("%d",&ptr[icnt]);
  }

  display(ptr,icount);
  return 0;
}
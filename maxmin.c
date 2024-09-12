#include<stdio.h>
#include<stdlib.h>
void maxmin(int Arr[],int isize)
{
  int icnt=0;
  int imax=Arr[0];
  int imin=Arr[0];
  for(icnt=0;icnt<isize;icnt++)
  {
    if(Arr[icnt]>imax)
    {
        imax=Arr[icnt];
    }
    if(Arr[icnt]<imin)
    {
        imin=Arr[icnt];
    }
    
  }
  printf("maximum elements is%d\n:",imax);
  printf("minimun elements is:%d\n",imin);
}

int main()
{
    int icount=0;
    int *ptr=NULL;
    int icnt=0;
    int iret=0.0f;

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
    maxmin(ptr,icount);
    
    free(ptr);
    printf("dyamic gets deallocated...\n");
    return 0;
}
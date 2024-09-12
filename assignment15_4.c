//Accept N numbers from user and accept range ,display all elements from that range.
#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[],int ilength,int istart,int iend)
{
   printf("elements within the range %d to%d are:\n");
   for(int i=0;i<ilength;i++)
   {
    if(Arr[i]>=istart&& Arr[i]<=iend)
    {
        printf("%d",Arr[i]);
    }
   }
   printf("\n");
}

int main()
{
    int isize=0,iret=0,icnt=0,ivalue=0,ivalue1=0;
    int *ptr=NULL;

    printf("enter number of elements");
    scanf("%d",&isize);

    printf("enter the starting point");
    scanf("%d",&ivalue1);
    
    printf("enter the ending point:");
    scanf("%d",&ivalue1);

    ptr=(int *)malloc(isize* sizeof(int));

    if(ptr==NULL)
    {
        printf("unable to allocate memory");
        return -1;

    }
    printf("enter %d elements",isize);
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("enter elements%d:",icnt+1);
        scanf("%d",&ptr[icnt]);
    }

    Range(ptr,isize,ivalue,ivalue1);

    free(ptr);

    

return 0;
}
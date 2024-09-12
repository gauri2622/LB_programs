#include<stdio.h>
#include<stdlib.h>
int Evenaddition(int Arr[], int isize)
{
    int icnt=0;
    int isum=0;
    for(icnt=0;icnt<isize;icnt++)
    
    {
        if((Arr[icnt]%2)==0)
        {
     isum=isum+Arr[icnt];
        }
    }
    
    return isum;
}

int main()
{
    int ivalue=0;
    int *ptr=NULL;
    int iret=0;

    printf("enter number:");
    scanf("%d",&ivalue);
   ptr=(int *)malloc(ivalue *sizeof(int));

printf("Dyanmic memory gets allocated succesfully for %d elements:",ivalue);

   printf("\nenter the %d values:\n",ivalue);
   for(int icnt=0;icnt<ivalue;icnt++)
   {
    printf("\nenter the elements no %d:",icnt+1);
    scanf("%d",&ptr[icnt]);
   }
     
    iret= Evenaddition(ptr,ivalue);
    printf("addition of elements is:%d\n",iret);
      free(ptr);
      printf("Dynamic memory is deallocated succesfully...");
     return 0;
}
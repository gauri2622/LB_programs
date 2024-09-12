#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int isize)
{
    int icnt=0;
    printf("\nelements array are:\n");
    for(icnt=0;icnt<isize;icnt++)
    {
     printf("%d\t",Arr[icnt]);
    }
    printf("\n");
}
int main()
{
    int ivalue=0;
    int *ptr=NULL;

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
     
     Display(ptr,ivalue);
      free(ptr);
      printf("Dynamic memory is deallocated succesfully...");
     return 0;
}
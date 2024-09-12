//Accept N numbers from user and display all such elements which are divisible by 5.

#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int ilength)
{
    int icnt=0;
    int isum=0;
 
    
    for(icnt=ilength;icnt>=0;icnt--)
    {
      isum +=Arr[icnt];
    }
    return isum-ilength;
}
int main()
{
   int isize=0;
   int *ptr=NULL;
   int icnt=0;
   int iret=0;
   int icount1=0;

   printf("Enter the elements:\n");
   scanf("%d",&isize);

   ptr=(int *)malloc(isize *sizeof(int));

   if(ptr==NULL)
   {
    printf("unable to allocate memory");
    return -1;
   }
   printf("enter elements %d\n",isize);
   for(icnt=0;icnt<isize;icnt++)
   {
      printf("enter element %d:",icnt+1);
      scanf("%d",ptr[icnt]);
   }
    
    iret= Display(ptr,isize);
   printf("elements are divisible by 5 is %d\n",icount1,iret);
  
   free(ptr);
   return 0;
}
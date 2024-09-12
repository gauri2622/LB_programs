//Accept N number from user and return difference between summation of even elements and summation of odd elements.
#include<stdio.h>
#include<stdlib.h>

int difference(int Arr[],int ilength)
{
    int icnt=0;
    int ieven=0;
    int iodd=0;
    int diff=0;
    for(icnt=0;icnt<ilength;icnt++)
    if((Arr[icnt]%2)==0)
    {
       ieven=ieven+Arr[icnt];
    }
   if ((Arr[icnt]%2)!=0)
   {
      iodd=iodd+1;
   }
    diff=ieven=-iodd;
   return ieven,iodd;
    
}
int main()
{
   int isize=0;
   int *ptr=NULL;
   int icnt=0;
   int iret=0;

   printf("Enter the elements:\n");
   scanf("%d",&isize);

   ptr=(int *)malloc(isize *sizeof(int));

   if(ptr==NULL)
   {
    printf("unable to allocate memory");
    return -1;
   }
   printf("enter %d elements ",isize);
   for(icnt=0;icnt<isize;icnt++)
   {
      printf("enter element %d:",icnt+1);
      scanf("%d",&ptr[icnt]);
   }
   iret=difference(ptr,isize);
   printf("result is %d",iret);

   free(ptr);
   return 0;
}
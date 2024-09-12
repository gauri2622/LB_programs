#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int isize)
{
    int icnt=0;
    printf("elements array are");
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

    printf("enter number");
    scanf("%d",&ivalue);
   ptr=(int *)malloc(ivalue *sizeof(int));

   printf("enter the values:");
   for(int icnt=0;icnt<ivalue;icnt++)
   {
    scanf("%d",&ptr[icnt]);
   }
     
     Display(ptr,ivalue);
      free(ptr);
     return 0;
}
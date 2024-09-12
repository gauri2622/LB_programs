//Accept N numbers from user and display all such numbers which contains 3 digits in it.
#include<stdio.h>
#include<stdlib.h>
void digit(int Arr[],int ilength)
{
   int icnt=0;
   printf("numbers with three digit\n");
   for(icnt=0;icnt<ilength;icnt++)
   {
    if(Arr[icnt]>=100 && Arr[icnt]<=999)
    {
        printf("%d\n",Arr[icnt]);
    }
   }
}
int main()
{
   int isize = 0;
   int icnt=0;
   int iret=0;
    int *ptr = NULL;
    

    printf("Enter the number of elements: ");
    scanf("%d", &isize);

    ptr = (int *)malloc(isize * sizeof(int));

    if (ptr == NULL) {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", isize);
    for (int icnt = 0; icnt < isize; icnt++) {
        printf("Enter element %d: ", icnt + 1);
        scanf("%d", &ptr[icnt]);
    }
   digit(ptr,isize);
   
   

    free(ptr);
    return 0;
}
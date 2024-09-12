//Accept N numbers from user and accept one another number as NO,return frequency of NO from it.

#include <stdio.h>
#include <stdlib.h>


int Frequency(int Arr[], int ilength,int ilength2)
{
    int icount=0;
   for (int icnt = 0; icnt < ilength; icnt++) {
        if (Arr[icnt] ==ilength2) 
        {
          icount++;
        }
    }
    return icount;
    printf("Freuency of number is:%d",icount);
    printf("\n");
}

int main()
{
   int isize = 0;
   int isize2=0;
   int icnt=0;
   int iret=0;
    int *ptr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &isize);
    

    if (isize <= 0) {
        printf("Invalid input. Number of elements should be greater than 0.\n");
        return 1;
    }

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

    printf("enter the number that are present in previous elements:");
    scanf("%d",&isize2);
    iret= Frequency(ptr, isize,isize2);
    printf(" frequency of number is:%d\n", iret);
    

    free(ptr);
    return 0;
}

    
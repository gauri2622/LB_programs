//Accept N numbers from user and return the smallest number.

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
typedef int bool;

bool minimum(int Arr[], int ilength )
{
    int min=Arr[0];
   for (int icnt = 1; icnt < ilength; icnt++) {
        if (Arr[icnt] <min)
         
        {
         min=Arr[icnt];
        }
    }
    return min;
    printf("\n");
}

int main()
{
   int isize = 0;
   int isize2=0;
   int icnt=0;
   int iret=0;
    int *ptr = NULL;
    bool bret= false;

    printf("Enter the number of elements: ");
    scanf("%d", &isize);

    printf("enter the number");
    scanf("%d",&isize2);

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
   iret=minimum(ptr,isize);
   printf("smallest number is %d",iret);

    free(ptr);
    return 0;
}
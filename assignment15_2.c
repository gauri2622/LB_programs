//Accept N numbers from user and accept one another number as no,return index of first occurrence of that NO.

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
typedef int bool;

bool Display(int Arr[], int ilength ,int ilength2)
{
   for (int icnt = 0; icnt < ilength; icnt++) {
        if (Arr[icnt] ==ilength2) 
        {
          return 1; 
        }
    }
    return 0;
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
    bret= Display(ptr, isize,isize2);
    if(bret==1)
    {
        printf("First occureence of number is %d",bret);
    }
    else{
        printf(" there is no such number\n");
    }

    free(ptr);
    return 0;
}

//Accept N numbers from user check whether that numbers contains 11 in it or not.
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
typedef int bool;

bool Display(int Arr[], int ilength)
{
   for (int icnt = 0; icnt < ilength; icnt++) {
        if (Arr[icnt] ==11) 
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

    bret= Display(ptr, isize);
    if(bret==true)
    {
        printf("11 is present");
    }
    else{
        printf("11 is not present");
    }

    free(ptr);
    return 0;
}

    
//Accept N number from user and return frequency of 11 form it.

#include <stdio.h>
#include <stdlib.h>


int Frequency(int Arr[], int ilength)
{
    int icount=0;
   for (int icnt = 0; icnt < ilength; icnt++) {
        if (Arr[icnt] ==11) 
        {
          icount++;
        }
    }
    return icount;
    printf("Freuency of 11 is:%d",icount);
    printf("\n");
}

int main()
{
   int isize = 0;
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

    iret= Frequency(ptr, isize);
    printf("%d", iret);
    

    free(ptr);
    return 0;
}

    
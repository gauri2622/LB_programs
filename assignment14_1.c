//Accept N numbers from user and return frequency of even numbers.

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int ilength)
{
    int ieven=0;
    
    for (int icnt = 0; icnt < ilength; icnt++) {
        if ((Arr[icnt] %2)==0) {
            ieven++;
            
        }
    }
    printf("frequency of even number is:%d\n",ieven);
    printf("\n");
}

int main()
{
    int isize = 0;
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

    Display(ptr, isize);

    free(ptr);
    return 0;
}

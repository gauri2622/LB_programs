//Accept N number from user and return difference between frequency of even numbers and odd numbers.

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int ilength)
{
    int ieven=0;
    int iodd=0;
    
    for (int icnt = 0; icnt < ilength; icnt++) {
        if ((Arr[icnt] %2)==0) {
            ieven++;
             }
             else{
                iodd++;
             }
    }
    printf("frequency of even number is:%d\n",ieven);
    printf("frequency of odd number is:%d\n",iodd);
    printf("differnece between even and odd is:%d\n",ieven-iodd);
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

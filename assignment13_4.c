//Accept N number from user and display all such elements which are divisible by 3 and 5.
#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int ilength)
{
    printf("Even numbers divisible by 3 & 5:\n");
    for (int icnt = 0; icnt < ilength; icnt++) {
        if ((Arr[icnt] % 3 == 0) && (Arr[icnt] % 5 == 0)) {
            printf("%d\n", Arr[icnt]);
        }
    }
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

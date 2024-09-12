//Accept N numbers from user and display summation of digits of each number.

#include<stdio.h>
#include<stdlib.h>
int Sum(int inum)
{
    int isum=0;
    while (inum>0)
    {
        isum=inum%10;
        inum/=10;
    }
    return isum;
}
void DigitsSum(int Arr[],int ilength)
{
    int icnt=0;
    int isum=0;
    int inum=0;
    
   printf("Summation of digits for each number:\n");
    for ( icnt = 0; icnt < ilength; icnt++) {
         inum = Arr[icnt];
         isum =Sum(inum);
        printf(" Sum of Digits: %d\n", inum, isum);
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
   DigitsSum(ptr,isize);
   
   

    free(ptr);
    return 0;
}
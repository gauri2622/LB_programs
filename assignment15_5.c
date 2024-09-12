//Accept N numbers from user and return product of all odd elements.

//Accept N numbers from user and accept range ,display all elements from that range.
#include<stdio.h>
#include<stdlib.h>
int product(int Arr[],int ilength)
{
    int oddProduct = 1;
    for (int i = 0; i < ilength; i++) {
        if (Arr[i] % 2 != 0) {
            oddProduct *= Arr[i];
        }
    }
    return oddProduct;
}  

int main()
{
    int isize=0,iret=0,icnt=0;
    int *ptr=NULL;

    printf("enter number of elements");
    scanf("%d",&isize);

    ptr=(int *)malloc(isize* sizeof(int));

    if(ptr==NULL)
    {
        printf("unable to allocate memory");
        return -1;

    }
    printf("enter %d elements",isize);
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("enter elements%d:",icnt+1);
        scanf("%d",&ptr[icnt]);
    }

    iret=product(ptr,isize);
    printf("product is %d",iret);

    free(ptr);

    

return 0;
}
#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int isize)
{
    int icnt=0;
    int isum=0;
    float faverage=0.0f;
    for(icnt=0;icnt<isize;icnt++)
    {
        isum=isum+Arr[icnt];
    }
    faverage= ((float)isum/(float)isize);
    return faverage;
}

int main()
{
    int icount=0;
    int *ptr=NULL;
    int icnt=0;
    float fret=0.0f;

    printf("enter number of elements that you want :\n");
    scanf("%d",&icount);

    ptr=(int*)malloc(icount *sizeof(int));
    printf("dyanamic memory gets aloocated...");

    printf("enter the elements:\n");
    for(icnt=0;icnt<icount;icnt++)
    {
        printf("enter the elements no %d:",icnt+1);
        scanf("%d",&ptr[icnt]);
        
    }
    fret=Average(ptr,icount);
    printf("average is:%f",fret);

    free(ptr);
    printf("dyamic gets deallocated...\n");
    return 0;
}
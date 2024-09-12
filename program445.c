#include<stdio.h>

void Display(int Arr[],int isize)
{
   int icnt=0;

   for(icnt=0;icnt<isize;icnt++)
   {
    printf("%d\n",Arr[icnt]);
   }
}

int main()
{
    int Arr[5]={10,20,30,40,50};

    Display(Arr,5);
    return 0;
}
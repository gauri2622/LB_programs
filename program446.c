#include<stdio.h>

int sum(int Arr[],int isize)
{
   int icnt=0;
   int isum=0;

  while(icnt<isize)
  {
    isum=isum+Arr[icnt];
    icnt++;
  }
  return isum;
}

int SumR(int Arr[],int isize)
{
    static int icnt=0;
    static int isum=0;

  if(icnt<isize)
  {
    isum=isum+Arr[icnt];
    icnt++;
    SumR(Arr,isize);
  }
 return isum; 
}

int main()
{
    int iret=0;
    int Arr[5]={10,20,30,40,50};

    iret=SumR(Arr,5);
    printf("summation is:%d\n",iret);
    return 0;
}
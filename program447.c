#include<stdio.h>

int Evencount(int Arr[],int isize)
{
   int icnt=0;
   int ieven=0;

  while(icnt<isize)
  {
    if((Arr[icnt]%2)==0)
    {
        ieven++;
    }
    icnt++;
  }
  return ieven;
}

int EvencountR(int Arr[],int isize)
{
    static int icnt=0;
    static int ieven=0;

  if(icnt<isize)
  {
    if((Arr[icnt]%2)==0)
    {
        ieven++;
    }
    icnt++;
    EvencountR(Arr,isize);
  }
 return ieven; 
}

int main()
{
    int iret=0;
    int Arr[5]={10,20,30,40,50};

    iret=EvencountR(Arr,5);
    printf("summation is:%d\n",iret);
    return 0;
}
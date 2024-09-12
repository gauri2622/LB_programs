#include<iostream>
using namespace std;

int Addition(int Arr[],int length)
{
    int sum=0,icnt=0;
    for(icnt=0;icnt<length;icnt++)
    {
        sum=sum+Arr[icnt];
    }
    return sum;
}
int main()
{
  int size=0;
  int *ptr=NULL;
  int icnt=0;
  int Ret=0;

   cout<<"enter number of elements:"<<"\n";
   cin>>size;

   ptr=new int[size];

   cout<<"enter the elements:"<<"\n";
   for(icnt=0;icnt<size;icnt++)
   {
    cin>>ptr[icnt];

   }
   Ret=Addition(ptr,size);
   cout<<"addition of all elements is:"<<Ret<<"\n";

   

   cout<<"\n";
   delete []ptr;

    return 0;
}
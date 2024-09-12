#include<iostream>
using namespace std;

template<class T>
int Addition(T Arr[],int length)
{
    T sum=0;
    int icnt=0;
    for(icnt=0;icnt<length;icnt++)
    {
        sum=sum+Arr[icnt];
    }
    return sum;
}
int main()
{
  int size=0;
 float *ptr=NULL;
  int icnt=0;
  float Ret=0.0;

   cout<<"enter number of elements:"<<"\n";
   cin>>size;

   ptr=new float[size];

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
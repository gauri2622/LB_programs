#include<iostream>
using namespace std;


int main()
{
  int size=0;
  int *ptr=NULL;
  int icnt=0;

   cout<<"enter number of elements:"<<"\n";
   cin>>size;

   ptr=new int[size];

   cout<<"enter the elements:"<<"\n";
   for(icnt=0;icnt<size;icnt++)
   {
    cin>>ptr[icnt];

   }
   cout<<"elements of the array are:\n";
   for(icnt=0;icnt<size;icnt++)
   {
    cout<<ptr[icnt]<<"\t";
   }

   cout<<"\n";
   delete []ptr;

    return 0;
}
#include<iostream>
using namespace std;

class Array
{
   public:
   int *Arr;
   int size;

   Array(int length)
   {
    size=length;
    Arr=new int[size];

   }
   ~Array()
   {
    delete[]Arr;
   }

   void Accept()
   {
    cout<<"enter the elements:\n";
    int icnt=0;

    for(icnt=0;icnt<size;icnt++)
    {
        cin>>Arr[icnt];
    }
   }

   void Display()
   {
    cout<<"elements of the array are:\n";
    int icnt=0;

    for(icnt=0;icnt<size;icnt++)
    {
        cout<<Arr[icnt]<<"\t";
    }
    cout<<"\n";
   }
};
int main()
{
   Array obj(5);
   obj.Accept();
   obj.Display();
  
    return 0;
}
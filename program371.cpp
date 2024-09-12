#include<iostream>
using namespace std;

class Array
{
   public:
   int *Arr;
   int size;

   Array(int length);
   
   ~Array();
   

   void Accept();
   

   void Display();
   int Addition();
   
};

Array::Array(int length)
   {
    size=length;
    Arr=new int[size];

   }
  Array:: ~Array()
   {
    delete[]Arr;
   }

   void Array:: Accept()
   {
    cout<<"enter the elements:\n";
    int icnt=0;

    for(icnt=0;icnt<size;icnt++)
    {
        cin>>Arr[icnt];
    }
   }

   void Array:: Display()
   {
    cout<<"elements of the array are:\n";
    int icnt=0;

    for(icnt=0;icnt<size;icnt++)
    {
        cout<<Arr[icnt]<<"\t";
    }
    cout<<"\n";
   }

   int Array::Addition()
   {
    int sum=0;
    int icnt=0;

    for(icnt=0;icnt<size;icnt++)
    {
        sum=sum+Arr[icnt];
    }
    return sum;
   }
int main()
{
    int ret=0;
    
   Array obj(5);
   obj.Accept();
   obj.Display();
   ret=obj.Addition();
   cout<<"Addition is:"<<ret<<"\n";
  
    return 0;
}
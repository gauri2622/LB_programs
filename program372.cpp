#include<iostream>
using namespace std;

template<class T>
class Array
{
   public:
   T *Arr;
   int size;

   Array(int length);
   
   ~Array();
   

   void Accept();
   

   void Display();
    T Addition();
   
};

template<class T>
Array<T>::Array(int length)
   {
    size=length;
    Arr=new T[size];

   }
   template<class T>
  Array<T>:: ~Array()
   {
    delete[]Arr;
   }

   template<class T>
   void Array<T>:: Accept()
   {
    cout<<"enter the elements:\n";
    int icnt=0;

    for(icnt=0;icnt<size;icnt++)
    {
        cin>>Arr[icnt];
    }
   }
    
    template<class T>
   void Array<T>:: Display()
   {
    cout<<"elements of the array are:\n";
    int icnt=0;

    for(icnt=0;icnt<size;icnt++)
    {
        cout<<Arr[icnt]<<"\t";
    }
    cout<<"\n";
   }
  template<class T>
   int Array<T>::Addition()
   {
   T sum=0;
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
    
   Array <int>obj(5);
   obj.Accept();
   obj.Display();
   ret=obj.Addition();
   cout<<"Addition is:"<<ret<<"\n";
  
    return 0;
}
#include<iostream>
using namespace std;

template <class T>
void swap(T &no1,T &no2)
{
    T temp;
    temp=no1;
    no1=no2;
    no2=temp;
}
int main()
{

   double ivalue1=10.5;
    double ivalue2=20.5;
    cout<<"value of ivalue1:"<<ivalue1<<"\n";
    cout<<"value of ivalue2:"<<ivalue2<<"\n";

    swap(ivalue1,ivalue2);

    cout<<"value of ivalue1:"<<ivalue1<<"\n";
    cout<<"ivalue of ivalue2:"<<ivalue2<<"\n";

    return 0;
}
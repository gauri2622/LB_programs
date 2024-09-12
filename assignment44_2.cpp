//write generic program to find largest number from three numbers.

#include<iostream>
using namespace std;

 template<class T>
T Max(T no1,T no2,T no3)
{
    T max=no1;
    if(no2>max)
    {
    max=no2;
    }
    if(no3>max)
    {
        max=no3;
    }
    return max;
}
int main()
{
    int iret=Max(10,20,30);
   cout<<"maximum no is:"<<iret<<"\n";
    float fret=Max(10.0f,20.0f,15.0f);
    cout<<"maximum no is:"<<fret<<"\n";
    return 0;
}
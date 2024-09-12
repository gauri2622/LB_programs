//write generic program to accept N number from user and return addition of that values.

#include<iostream>
using namespace std;

 template<class T>
T AddN(T *arr,int isize)
{
    T sum=0;;
    int i=0;
    for(i=0;i<isize;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.0,3.7,9.8,8.7};
    int isum=AddN(arr,5);
    cout<<"Addition is:"<<isum<<"\n";
    float fsum=AddN(brr,4);
    cout<<"addition is:"<<fsum<<"\n";
    return 0;
}
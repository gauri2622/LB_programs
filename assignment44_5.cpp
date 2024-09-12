//write generic program to accept N number from user and return smallest values.

#include<iostream>
using namespace std;

 template<class T>
T Min(T *arr,int isize)
{
    T imin=arr[0];
    int i=0;
    for(i=0;i<isize;i++)
    {
        if(arr[i]<imin)
        {
            imin=arr[i];
        }
    }
    return imin;
}
int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={3.7,3.7,9.5,8.7};
    int imin=Min(arr,5);
    cout<<"smallest value is:"<<imin<<"\n";
    float fmin=Min(brr,4);
    cout<<"smallest value is:"<<fmin<<"\n";
    return 0;
}
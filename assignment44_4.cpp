//write generic program to accept N number from user and return largest values.

#include<iostream>
using namespace std;

 template<class T>
T Max(T *arr,int isize)
{
    T max=arr[0];
    int i=0;
    for(i=0;i<isize;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={3.7,3.7,9.5,8.7};
    int imax=Max(arr,5);
    cout<<"largest value is:"<<imax<<"\n";
    float fmax=Max(brr,4);
    cout<<"largest value is:"<<fmax<<"\n";
    return 0;
}
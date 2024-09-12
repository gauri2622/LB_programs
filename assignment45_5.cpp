//write generic program which accept N values and reverse the contents.
/*
input: 10 20 30 40 50 60 20
output: 20 60 50 40 30 20 10
*/
#include<iostream>
using namespace std;

template<class T>
int Reverse(T *arr, int isize)
{
    for(int i=0;i<isize/2;i++)
    {
    T temp=arr[i];
    arr[i]=arr[isize-1-i];
    arr[isize-1-i]=temp;
    }
}

int main()
{
    int ivalue1;
    cout<<"enter the number of elements:";
    cin>>ivalue1;
    int *arr = new int[ivalue1]; 

    cout << "Enter the elements: ";
    for (int i = 0; i < ivalue1; i++)
    {
        cin >> arr[i];
    }

     Reverse(arr, ivalue1);
    cout << "reverse element: ";
    for(int i=0;i<ivalue1;i++)
    {
        cout<<arr[i]<<"\n";
    }

    delete[] arr;

    return 0;
}

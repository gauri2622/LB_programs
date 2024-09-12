//write generic program which accept N values and search first occurence of any specific value.
/*
input: 10 20 30 40 50 60 20
value of frequency: 30
output: 3
*/

#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr, int isize, T ino)
{
    for (int i = 0; i < isize; i++)
    {
        if (arr[i] == ino)
        {
             return i+1;
        }
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

    int ivalue2;
    cout << "Enter the value to find frequency: ";
    cin >> ivalue2;

    int iret = SearchFirst(arr, ivalue1, ivalue2);
    cout << "Firest occurence of " << ivalue2 << " is: " << iret << "\n";

    delete[] arr;

    return 0;
}

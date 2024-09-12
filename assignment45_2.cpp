//write generic program which accept N values and count frequency of any specific value.
/*
input: 10 20 30 40 50 60 20
value of frequency: 20
output: 2
*/

#include<iostream>
using namespace std;

template<class T>
int frequency(T *arr, int isize, T ino)
{
    int count = 0;
    for (int i = 0; i < isize; i++)
    {
        if (arr[i] == ino)
        {
            count++;
        }
    }
    return count;
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

    int iret = frequency(arr, ivalue1, ivalue2);
    cout << "Frequency of " << ivalue2 << " is: " << iret << "\n";

    delete[] arr;

    return 0;
}

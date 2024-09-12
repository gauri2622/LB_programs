//write generic program which accept one value and one number from user.print that value that number of times on screen
/*
input: M 7
output: M M M M M M M
input: 11 3
output: 11 11 11
*/

#include<iostream>
using namespace std;

template<class T>
void Display(T value,int isize)
{
    int i=0;
   for(i=0;i<isize;i++)
   {
    cout<<value<<" ";
   }
   
}
int main()
{
   char value1;
   int value2;
    cout<<"enter a value:";
    cin>>value1;
    cout<<"enter the number:";
    cin>>value2;
    Display(value1,value2);
    return 0;
}
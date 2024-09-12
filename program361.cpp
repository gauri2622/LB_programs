#include<iostream>
using namespace std;

void swap(int &no1,int &no2)
{
    int temp;
    temp=no1;
    no1=no2;
    no2=temp;
}
int main()
{

    int ivalue1=10;
    int ivalue2=20;
    cout<<"value of ivalue1:"<<ivalue1<<"\n";
    cout<<"value of ivalue2:"<<ivalue2<<"\n";

    swap(ivalue1,ivalue2);

    cout<<"value of ivalue1:"<<ivalue1<<"\n";
    cout<<"ivalue of ivalue2:"<<ivalue2<<"\n";

    return 0;
}
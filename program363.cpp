#include<iostream>
using namespace std;

void swap(float &no1,float &no2)
{
    float temp;
    temp=no1;
    no1=no2;
    no2=temp;
}
int main()
{

    float ivalue1=10.5;
    float ivalue2=20.5;
    cout<<"value of ivalue1:"<<ivalue1<<"\n";
    cout<<"value of ivalue2:"<<ivalue2<<"\n";

    swap(ivalue1,ivalue2);

    cout<<"value of ivalue1:"<<ivalue1<<"\n";
    cout<<"ivalue of ivalue2:"<<ivalue2<<"\n";

    return 0;
}
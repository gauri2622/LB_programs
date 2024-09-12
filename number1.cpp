#include<iostream>
using namespace std;

class number
{
    private:
    int ino;

    public:
    number(int x)
    {
        ino=x;
    }
    //logics
    int factorial()
    {
        int ifact=1;
    int icnt=0;
    
    for(icnt=1;icnt<=ino;icnt++)
    {
        ifact=ifact*icnt;
    }
    return ifact;
    }
};
int main()
{
    int ivalue=0;
    int iret=0;

    cout<<"enter the number:"<<endl;
    cin>>ivalue;
    
    number nobj(ivalue);
    iret=nobj.factorial();
   cout<<"factorial is:"<<iret<<endl;
    return 0;
}
#include<iostream>
using namespace std;

class String
{
 private:
 char *str;
 int isize;

 public:
 String()
 {
    isize=20;
   str=new char[20]; 
 }
 String(int x)
 {
    isize=x;
    str = new char[isize];
 }
  ~String()
 {
    delete []str;
 }
 void Accept()
 {
    cout<<"enter the string:"<<endl;
    cin.getline(str,isize);
 }
 void Display()
 {
    cout<<"string is:"<<str<<endl;
 }
 int countcapital()
 {

    int icnt=0;
    char *temp=str;
    while(*temp!='\0')
    {
        if((*temp>='A')&&(*temp<='Z'))
        {
            icnt++;
        }
       temp++;
    }
    return icnt;
 }

};

int main()
{
    int iret=0;
     //String sobj(30);
     //String sobj1(30);
     String *sobj1=new String(30);
     /*sobj1.Accept();*/sobj1->Accept();
     /*sobj1.Display();*/sobj1->Display();
     //comment section for dynamic code.
    iret= sobj1.countcapital();
    cout<<"capital count is:"<<iret<<endl;
     String->Display();
    delete sobj1;
    
    return 0;
}
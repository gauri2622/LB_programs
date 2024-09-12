#include<iostream>
using namespace std;

class Arithematic
{
   public:
     int no1;
     int no2;
     Arithematic(int A,int B);
     
     int Addition();
     int Multi();
     int substraction();
     

};
/*
   return_value class_name:: function_name(paramters)
   {
    body
   }
*/
     Arithematic::Arithematic(int A,int B)
     {
        this->no1=A;
        this->no2=B;
     }
     int Arithematic:: Addition()
     {
        int Ans=0;
        Ans=no1+no2;
        return Ans;
     }
     int Arithematic::Multi()
     {
        int Ans=0;
        Ans=no1*no2;
        return Ans;
     }
     int Arithematic::substraction()
     {
        int Ans=0;
        Ans=no1-no2;
        return Ans;
     }
int main()
{
   int iret=0;
   Arithematic obj1(11,10);

   iret=obj1.Addition();
   cout<<"Addition is:"<<iret<<"\n";

   iret=obj1.Multi();
   cout<<"multiplication is:"<<iret<<"\n";

      iret=obj1.substraction();
   cout<<"substraction is:"<<iret<<"\n";
   

    return 0;
}
#include<iostream>
using namespace std;
class Array
{
   private:
   int *Arr;
   int isize;

   public:
   Array(int x)
   {
    isize=x;
    Arr=new int[isize];
   }
   ~Array()
   {
    delete []Arr;
   }


void accept()
{
    int icnt=0;
    cout<<"please enter the elements:"<<endl;
    for(icnt=0;icnt<isize;icnt++)
    {
        cin>>Arr[icnt];
    }
}
void display()
{
  cout<<"please enter the element :"<<endl;
  int icnt=0;
  for(icnt=0;icnt<isize;icnt++)
  {
    cout<<Arr[icnt]<<"\t";
  }
}
};
int main()
{
   int ilength=0;

   cout<<"enter the number of elements:"<<endl;
   cin>>ilength;

   Array aobj(ilength);

   aobj.accept();
   aobj.display();

    return 0;
}
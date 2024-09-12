/*
   $ * * * *
   * $ 1 1 *
   * 0 $ 1 *
   * 0 0 $ *
   * * * * $
*/
#include<iostream>
using namespace std;

class pattern
{
private:
       int iRow;
       int iCol;

public:
    pattern(int x,int y)
    {
        iRow=x;
        iCol=y;
    }
    void display()
    {
      int icnt=0;
      int icnt1=0;
      for(icnt=1;icnt<=iRow;icnt++)
      {
       for(icnt1=1;icnt1<=iCol;icnt1++)
       {
      if(icnt==icnt1)
      {
        cout<<"$\t";
      }
      else if((icnt==1)||(icnt==iRow)||(icnt1==1)||(icnt1==iCol))
      {
        cout<<"*\t";
      }
      else if(icnt>icnt1)
      {
    cout<<"0\t";
      }
      else if(icnt<icnt1)
      {
       cout<<"1\t";
      }

    }
    cout<<endl;
    }
    }
};

int main()
{
   int ivalue=0;
   int ivalue1=0;

   cout<<"enter number of rows"<<endl;
   cin>>ivalue;

   cout<<"enter number of columns:"<<endl;
   cin>>ivalue1;
 
 pattern *pobj=new pattern(ivalue,ivalue1);
 pobj->display();

 delete pobj;
    return 0;
}
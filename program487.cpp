#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr;
        int iSize;

    public:
        Array(int X)        // Parametrised Constructor
        {
            iSize = X;
            Arr = new int[iSize];
        }

        ~Array()            // Destructor
        {   
            delete []Arr;
        }

        void Accept()       // Member function
        {
            int iCnt = 0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()      // Member function
        {
            cout<<"Elements of the array are : "<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
        // Logics
        //note:Array should br sorted
      void reverse()
      {
        int istart=0;
        int iend=iSize-1;
        int itemp=0;

        while(istart<iend)
        {
            itemp=Arr[istart];
            Arr[istart]=Arr[iend];
            Arr[iend]=itemp;

            istart++;
            iend--;
        }
      }
        
};  // End of class

int main()
{
    int iLength = 0;
    int iRet = 0;
    int ivalue=0;
    bool bret=false;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();
  
    aobj->reverse();
    aobj.Display();

    delete aobj;

    return 0;
}
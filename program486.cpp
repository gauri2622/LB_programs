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
      bool BinarySearch(int ino)
      {
        bool bflag=false;
        int istart=0;
        int iend=0;
        int imid=0;

        istart=0;
        iend=iSize-1;

        while(istart<=iend)
        {
            imid=istart+(iend-istart)/2;
            if(Arr[imid]==ino)
            {
                bflag=true;
                break;
            }
            else if(Arr[imid]<ino)
            {
                istart=imid+1;
            }
            else if(Arr[imid]>ino)
            {
               iend=imid-1;
            }
        }
        return bflag;
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
  
    cout<<"Enter the element that you want to search:\n";
    cin>>ivalue;

    bret=aobj->BinarySearch(ivalue);
    if(bret==true)
    {
        cout<<"Elemet is present in the array\n";
    }
    else
    {
        cout<<"elements is no such elemets in the array\n";
    }
    delete aobj;

    return 0;
}
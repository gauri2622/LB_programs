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
        
        void BubbleSortEfficient(char choice)
        {
            int iTemp = 0;
            int i = 0, j = 0;
            bool bflag=false;

            if(choice=='I')
            {
                 for(i = 0; i < iSize; i++)
            {
                cout<<"Data after pass:"<<(i+1)<<"\n";
                bflag=false;
                for(j = 0; j < iSize-i-1; j++)
                {
                    if(Arr[j] > Arr[j+1])
                    {
                        iTemp = Arr[j];
                        Arr[j] = Arr[j+1];
                        Arr[j+1] = iTemp;
                        bflag=true;
                    }
                }
                if(bflag==false)
                {
                    break;
                }
                Display();
            }
            
            
            else if(choice=='D')
            {
                 for(i = 0; i < iSize; i++)
            {
                cout<<"Data after pass:"<<(i+1)<<"\n";
                bflag=false;
                for(j = 0; j < iSize-i-1; j++)
                {
                    if(Arr[j] > Arr[j+1])
                    {
                        iTemp = Arr[j];
                        Arr[j] = Arr[j+1];
                        Arr[j+1] = iTemp;
                        bflag=true;
                    }
                }
                if(bflag==false)
                {
                    break;
                }
                Display();
            }
            }
            else
            {
                cout<<"Invalid choice\n";
            }
            }
        }

};  // End of class

int main()
{
    int iLength = 0;
    int iRet = 0;
    int iValue = 0;
    bool bRet = false;
    char cChoice='\0';

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

     cout<<"please enter your choice for sorting:\n";
     cout<<"I: increasing order";
     cout<<"D: decreasing order";

     cin>>cChoice;
    aobj->BubbleSortEfficient(cChoice);

    aobj->Display();

    delete aobj;

    return 0;
}
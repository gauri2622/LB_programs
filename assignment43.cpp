/*complete code snippet by writing defination of below function
1.searchLast()- search last occurences of number
2.evencount()= count even elements
3.oddcount()= count odd elements
4.sumall()=sum of all elements
*/
#include<iostream>
using namespace std;

class Array
{

    protected:
    int *Arr;
    int size;

    public:
      Array(int value=10)
      {
        cout<<"inside constructor\n";

        this->size=value;
        this->Arr=new int[size];
      }
      Array(Array &ref)
      {
        cout<<"inside copy constructor\n";
        this->size=ref.size;
        this->Arr=new int [this->size];

        for(int i=0;i<size;i++)
        {
            this->Arr[i]=ref.Arr[i];
        }
      }
    ~Array()
    {
        cout<<"inside destructor\n";
        delete []Arr;
    }

    inline void Accept();
    inline void Display();
};
void Array::Accept()
{
    cout<<"please enter the value\n";

    for(int i=0;i<this->size;i++)
    {
        cin>>Arr[i];
    }
}
void Array:: Display()
{
    cout<<"elements are\n";

    for(int i=0;i<this->size;i++)
    {
        cout<<Arr[i]<<" ";
    }
}
class ArrSearch: public Array
{
    public:
    ArrSearch(int no=10):Array(no)
    {

    }
    int frequency(int);
    int searchFirst(int);
    int searchLast(int);
    int EvenCount();
    int OddCount();
    int SumAll();
};
int ArrSearch::searchFirst(int value)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            break;
        }
    }
    if(i==size)
    {
        return -1;

    }
    else{
        return i+1;
    }
}
int ArrSearch::frequency(int value)
{
    int icnt=0;
    for(int i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            icnt++;
        }
    }
    return icnt;
}
int ArrSearch::searchLast(int value)
{
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            j=i;
        }
    }
    return j;
}
int ArrSearch::EvenCount()
{
    int icnt=0;
    for(int i=0;i<size;i++)
    {
        
        if(Arr[i]%2==0)
        {
            icnt++;
        }
    }
    return icnt;
}
int ArrSearch::OddCount()
{
    int icnt=0;
    for(int i=0;i<size;i++)
    {
        
        if(Arr[i]%2 !=0)
        {
            icnt++;
        }
    }
    return icnt;
}
int ArrSearch::SumAll()
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum==Arr[i];
    }
    return sum;
}
int main()
{
    cout<<"inside main\n";

    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iret=sobj1.frequency(11);
    cout<<"frequency is"<<iret<<"\n";

    iret=sobj1.searchFirst(11);
    cout<<"first occurence is"<<iret<<"\n";

    iret=sobj1.searchLast(11);
    cout<<"last occurence is"<<iret<<"\n";

    iret=sobj1.EvenCount();
    cout<<"even count is:"<<iret<<"\n";

    iret=sobj1.OddCount();
    cout<<"odd count is:"<<iret<<"\n";

    iret=sobj1.SumAll();
    cout<<"sum of elements :"<<iret<<"\n";

    return 0;
}


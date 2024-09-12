#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    private:
        PNODE first;
        int Count;

    public:
        SinglyLL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int no,int ipos);
        void DeleteAtPos(int ipos);
};

SinglyLL::SinglyLL(){}
void SinglyLL::InsertFirst(int no){}
void SinglyLL::InsertLast(int no){}
void SinglyLL::Display(){}
int SinglyLL::CountNode(){}
void SinglyLL::DeleteFirst(){}
void SinglyLL::DeleteLast(){}
void SinglyLL::InsertAtPos(int no,int ipos){}
void SinglyLL::DeleteAtPos(int ipos){}

int main()
{
    return 0;
}
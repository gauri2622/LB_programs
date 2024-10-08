#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)   // LL is empty
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}


void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}
bool LoopCheck(PNODE Head)
{
    PNODE Teacher=Head;
    PNODE Student=Head;
    bool bflag=false;

    while((Teacher!=NULL) &&(Teacher->next!=NULL))
    {
        Student=Student->next;
        Teacher=Teacher->next->next;

        if(Student==Teacher)
        {
            bflag=true;
            break;
        }
    }
    return bflag;
}

int main()
{
    PNODE First = NULL;
   bool bret = false;
    
     PNODE ThirdNode=NULL;
     PNODE LastNode=NULL;
     

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);


    

    ThirdNode=First;
    LastNode=First;

    ThirdNode=ThirdNode->next->next;

    LastNode=LastNode->next->next->next->next;

    LastNode->next=ThirdNode;

    bret=LoopCheck(First);

    if(bret==true)
    {
        printf("loop detected in the list...\n ");
    }
    else
    {
        printf("loop is not detected....\n");
    }
    

    return 0;
}
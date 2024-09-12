#include<stdio.h>
#include<stdlib.h>

typedef struct nodes{
    int data;
    struct node *lchild;
    struct node *rchild;

}NODE,*PNODE,**PNODE;

void Insert(PPNODE Head,int no)
{
     PNODE newn=NULL;
     PNODE temp=*Head;

     newn=(PNODE)malloc(sizeof(NODE));
     newn->data=no;
     newn->lchild=NULL;
     newn->rchild=NULL;

     if(*Head==NULL)
     {
        *Head=newn;
     }
     else
     {
        while(1)  //unconditional loop
        {
          if(no==temp->data)
          {
            printf("unable to insert as data is alredy present\n");
            free(newn);
            break;
          }
          else if(no>temp->data)
          {
            if(temp->rchild==NULL)
            {
                temp->rchild=newn;
                break;
            }
            temp=temp->rchild;

          }
          else if(no<temp->data)
          {
            if(temp->lchild==NULL)
            {
                temp->lchild=newn;
                break;
            }
            temp=temp->lchild;
          }
        }
     }
}

void inorder(PNODE Head)
{
    if(Head!=NULL)
    {
        inorder(Head->lchild);
        printf("%d\n",Head->data);
        inorder(Head->rchild);
    }
}
int main()
{
    PNODE first=NULL;
    Insert(&first,21);
    Insert(&first,11);
    Insert(&first,51);

     printf("inorder traversal is:");
    return 0;
}
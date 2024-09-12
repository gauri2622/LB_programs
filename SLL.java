import java.util.*;

class SLL
{
    public static void main(String[] args) 
    {
        int iret=0;
      SinglyLL obj=new SinglyLL();

      obj.InsertFirst(51);
      obj.InsertFirst(21);
      obj.InsertFirst(11);

      obj.Display();

      iret=obj.Count();
      System.out.println("number of element are:"+iret);

      obj.InsertLast(101);
      obj.InsertLast(111);
      obj.InsertLast(121);
      obj.Display();

      iret=obj.Count();
      System.out.println("elements are:"+iret);
      
      obj.InsertAtpos(105, 5);
      obj.Display();

      obj.DeleteFirst();
      obj.Display();
      
      obj.DeleteAtPos(5);
     obj.Display();

      iret=obj.Count();
      System.out.println("Number of elements are:"+iret);

      obj.DeleteLast();
      obj.Display();

      iret=obj.Count();
      System.out.println("Number of elememts are:"+iret);

    }
}
class node    //struct node
{
     public int data;
     public node next;  //struct node *next;
     
     public node(int no)
     {
        data=no;
        next=null;
     }
    }

class SinglyLL
{
    private node first;
    private int count;

    public SinglyLL()
    {
        first=null;
        count=0;
    }
    public void InsertFirst(int no)
    {
        node newn=new node(no);

        if(first==null)
        {
           first=newn;
        }
        else
        {
         newn.next=first;
         first=newn;
        }
        count++;
    }
    public void InsertLast(int no)
    {
       node newn=new node(no);

        if(first==null)
        {
           first=newn;
        }
        else
        {
         node temp=first;
         while (temp.next!=null) {
            temp=temp.next;
         }
         temp.next=newn;
        }
        count++; 
    }
    
    public void DeleteFirst()
    {
        if(first==null)
        {
            return;
        }
        else if(first.next==null)  //LL co ntains single node
        {
            first=null;
        }
        else //LL contais more than one node
        {
            first=first.next;
        }
        count--;
    }
    public void DeleteLast()
    {
        if(first==null)
        {
            return;
        }
        else if(first.next==null)  //LL co ntains single node
        {
            first=null;
        }
        else //LL contais more than one node
        {
           node temp=first;

           while (temp.next.next!=null)
            {
             temp=temp.next; 
           }
           temp.next=null;
        }
        count--;
    }
    
    public void Display()
    {
        node temp=first;
        System.out.println("Elements of the linked list are:");

        while (temp!=null) 
        {
          System.out.print("|"+temp.data +"|->");
          temp=temp.next;

        }
        System.out.println("null");
    }
    public int Count()
    {
        return count;
    }
    public void InsertAtpos(int no,int ipos)
    {
     if((ipos<1)||(ipos>(count+1)))

     {
       System.out.println("Invalid position");
       return;
     }
     else if(ipos==1)

     {
      InsertFirst(no);
     }
     else if(ipos==count+1)
     {
        InsertLast(no);
     }
     else
     {
         node newn=new node(no);
         node temp=first;

         for(int i=1;i<ipos-1;i++)
         {
            temp=temp.next;
         }
         newn.next=temp.next;
         temp.next=newn;

         count++;
     }
    }
    public void DeleteAtPos(int ipos)
    {
      if((ipos<1)||(ipos>(count)))

     {
       System.out.println("Invalid position");
       return;
     }
     else if(ipos==1)

     {
      DeleteFirst();
     }
     else if(ipos==count+1)
     {
        DeleteLast();
     }
     else
     {
        node temp=first;

        for(int i=0;i<ipos-1;i++)
        {
            temp=temp.next;
        }
        temp.next=temp.next.next;
        count--;
     }
    }
}

//Customized database management system
import java.util.*;

class DBMSProject
{
    public static void main(String Arg[]) 
    {
        DBMS obj = new DBMS();
        obj.InsertIntoTable("Amit", "pune", 89);
        obj.InsertIntoTable("pooja", "mumbai", 90);
        obj.InsertIntoTable( "Gauri", "pune", 90);
        obj.InsertIntoTable("rahul", "satara", 80);
        obj.InsertIntoTable("neha", "pune", 78);


        obj.SelectStarFrom();
        obj.SelectStarFromWhereCity("city");
        obj.SelectCount();
        obj.SelectAvg();
        obj.SelectMax();
        obj.SelectSum();
        obj.SelectStarFromName("Amit");
    }
}
class node
{

    private static int counter=1;
   public int Rno;
    public String Name;
    public String City;
    public int Marks;

    public node next;

    public node(String B,String C,int D)
    {
        Rno=counter;
        counter++;

        Name=B;
        City=C;
        Marks=D;
        next=null;
    }
}

class DBMS
{
    public node first;
    public DBMS()
    {
        first=null;
        System.out.println("DBMS initialised succesfully....");
        System.out.println("Student table gets created succesfully....");
    }

    public void InsertIntoTable(int Rno,String Name,String City,int Marks)
    {
    node newn = new node(Name,City,Marks);
    if(first==null)
    {
        first=newn;
    }
    else
    {
    node temp=first;
    while(temp.next!=null)
    {
        temp=temp.next;
    }
    temp.next=newn;
    System.out.println("one record gets inserted succesfully...");
    }
}

public void SelectStarFrom()
{
    System.out.println("Data from the student table is:");

    node temp=first;

    while (temp!=null) {
        System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
        temp=temp.next;
    }
    System.out.println("---------------------------------------------------------\n");
}

//select * from student where city='_____';
public void SelectStarFromWhereCity(String str)
{
    System.out.println("Data from the student table where city is:"+str);

    node temp=first;

    while (temp!=null) 
    {
        if(str.equals(temp.City))
        {
        System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
        }
        temp=temp.next;
    }
    System.out.println("---------------------------------------------------------\n");
}

public void SelectCount()
{
   node temp=first;
   int icnt=0;

   while ((temp!=null))
    {
       temp=temp.next;
       icnt++; 
   }
   System.out.println("number of records in the table:"+icnt);
}

public void SelectSum()
{
   node temp=first;
   int isum=0;

   while ((temp!=null))
    {
       temp=temp.next;
       isum=isum+temp.Marks; 
   }
   System.out.println("summation of marks column is:"+isum);
}

public void SelectAvg()
{
   node temp=first;
   int isum=0;
   int icnt=0;

   while ((temp!=null))
    {
       temp=temp.next;
       isum=isum+temp.Marks; 
       icnt++;
   }
   System.out.println("Average of marks column is:"+(float)((float)isum/icnt));
}


public void SelectMax()
{
   node temp=first;
   int imax=0;
   if(temp!=null)
   {
    imax=temp.Marks;
   }

   while ((temp!=null))
    {
     if(  temp.Marks>imax)
     {
        imax=temp.Marks;
     }
     temp=temp.next;
       
   }
   System.out.println("Average of marks column is:"+imax);
}

public void SelectStarFromName(String str)
{
   node temp=first;
   
   while ((temp!=null))
    {
     if(str.equals(temp.Name))
     {
        System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks); 
     }
     temp=temp.next;
       
   }
   
}
}
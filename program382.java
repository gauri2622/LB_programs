import java.util.*;

class Program381
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iret=0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();
        iret=mobj.Maximum();
        iret=mobj.Minimum();
       
        System.out.println("maximum number is:"+iret);
        System.out.println("minimum number is:"+iret);
        mobj=null;
        System.gc();
    }
}
class Matrix
{
    protected int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }
     protected void finalize()
     {
        Arr=null;
     }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        System.out.println("Enter the elements : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Entered elements are : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
    
}
class MyMatrix extends Matrix
{
    public MyMatrix(int A,int B)
    {
        super(A, B);
    }

    public int Maximum()
    {
       int i = 0, j = 0,imax=Arr[0][0];

        System.out.println("Entered elements are : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                 if(Arr[i][j]>imax)
                 {
                     imax=Arr[i][j];
                 }
            }
        }
        return imax;
             
    }
    public int Minimum()
    {
       int i = 0, j = 0,imin=Arr[0][0];

        System.out.println("Entered elements are : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                 if(Arr[i][j]<imin)
                 {
                     imin=Arr[i][j];
                 }
            }
        }
        return imin;
             
    }
    
}


    



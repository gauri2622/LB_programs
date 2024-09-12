import java.util.*;
import LB.*;

class Program384
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        

        mobj.summationRow();
        mobj = null;
        System.gc();
    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void summationRow()
    {
        int i=0,j=0,isum=0;
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                isum= isum+Arr[i][j];
            }
            System.out.println("Summation of row:"+(i+1)+"is:"+isum);
            isum=0;
        }

    }
}


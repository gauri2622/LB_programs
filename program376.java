import java.util.*;

public class program376 
{
    public static void main(String arg[])
    {
          Scanner sobj=new Scanner(System.in);
          int irow=0, icol=0;
          System.out.println("ENter number of rows:");
          irow=sobj.nextInt();

          System.out.println("ENter number of columns:");
          icol=sobj.nextInt();

          int Arr[][]=new int[irow][icol];
            int i=0,j=0;
          System.out.println("Enter the elements:");
          for( i=0;i<irow;i++)
          {
            for( j=0;j<icol;j++)
            {
                Arr[i][j]=sobj.nextInt();
            }
        } 
        
        System.out.println("Entered elements are:");
          for( i=0;i<irow;i++)
          {
            for( j=0;j<icol;j++)
            {
               System.err.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }    
    }    
}

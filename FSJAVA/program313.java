import java.util.*;
import java.io.*;

class program313
{
    public static void main(String arg[]) 
    {
      Scanner sobj=new Scanner(System.in);

      System.out.println("ENter the name of file:");
      String FileName=sobj.nextLine();
      try
      {
      
        
        FileInputStream fobj=new FileInputStream(FileName);
       byte Arr[]=new byte[100];  /*  */
         fobj.read(Arr);
        String str=new String (Arr);
        System.out.println("str");

        fobj.close();
      }
      
    
    catch(Exception obj)
    {
        System.out.println("exception occured");
    }


    }
}
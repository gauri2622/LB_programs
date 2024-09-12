import java.util.*;
import java.io.*;

class program308
{
    public static void main(String arg[]) 
    {
      Scanner sobj=new Scanner(System.in);

      System.out.println("ENter the name of file:");
      String FileName=sobj.nextLine();
      try{
      File fobj=new File(FileName);
      boolean bret=false;

      bret=fobj.exists();
      if(bret==true)
      {
        System.out.println("file is present");
      }
      else{
        System.out.println("there is no such file present");
      }
      }
      
    
    catch(Exception obj)
    {
        System.out.println("exception occured");
    }


    }
}
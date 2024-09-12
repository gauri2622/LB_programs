import java.util.*;
import java.io.*;

class program307
{
    public static void main(String arg[]) 
    {
      Scanner sobj=new Scanner(System.in);

      System.out.println("ENter the name of file:");
      String FileName=sobj.nextLine();
      try{
      File fobj=new File(FileName);

      boolean bret=false;

      bret= fobj.createNewFile();

      if(bret==true)
      {
        System.out.println("file gets succesffuly created..");

      }
      else{
        System.out.println("unable to create file..");
      }
    }
    catch(IOException obj)
    {
        System.out.println("exception occured");
    }
    catch(Exception obj)
    {
        System.out.println("exception occured");
    }


    }
}
import java.util.*;
import java.io.*;

class Program316
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of directory");
        String DirectoryName= sobj.nextLine();

        boolean bret=false;
        File fobj=new File(DirectoryName);

        bret=fobj.isDirectory();
        if(bret==true)
        {
            System.out.println("directory is present");
        }
        else
        {
            System.out.println("there is no such directory");
        }


    }
}

import java.util.*;
import java.io.*;

class Program320
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of directory");
        String DirectoryName= sobj.nextLine();

         System.out.println(("enter the name of packed file that you want to create"));
         String PackedFile=sobj.nextLine();

         File fobjPack=new File(PackedFile);
         boolean bret= fobjPack.createNewFile();
         if(bret==false)
         {
            System.out.println("unamble to create packed file...");
            return;
         }
        
        File fobj=new File(DirectoryName);

        bret=fobj.isDirectory();
        if(bret==true)
        {
            System.out.println("directory is present");
            
            File Arr[]=fobj.listFiles();
            System.out.println("number of files in the directory are:"+Arr.length);
            for(int i=0;i<Arr.length;i++)
            {
                System.out.println( "file name:"+Arr[i].getName()+" File size:"+Arr[i].getName());
            }
        }
        else
        {
            System.out.println("there is no such directory");
        }


    }
}

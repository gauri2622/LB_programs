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
            
            FileOutputStream fcombine =new FileOutputStream(PackedFile);
            int iret=0;

            byte Buffer[]=new byte[1024];
            for(int i=0;i<Arr.length;i++)
            {
            FileInputStream fiobj=new FileInputStream(Arr[i].getName());
            
            while ((iret=fiobj.read(Buffer))!=-1)
             {
                 fcombine.write(Buffer,0,iret);    
            }
        }
        else
        {
            System.out.println("there is no such directory");
        }


    }
    }
}

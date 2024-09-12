import java.util.*;
import java.io.*;

class Program347
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of packed file that you want to unpack : ");
        String PackedFile = sobj.nextLine();

        File fobj = new File(PackedFile);
        FileInputStream fiobj = new FileInputStream(fobj);

        byte Header[] = new byte[100];

        fiobj.read(Header,0,100);
        
        String Hstr = new String(Header);

        System.out.println(Hstr);

        String str = Hstr.trim();

        String Tokens[] = str.split(" ");

        

        File newFile=new File (Tokens[0]);
        newFile.createNewFile();
         
        int FileSize=Integer.parseInt(Tokens[1]);

        byte Buffer[]=new byte[FileSize];
        fiobj.read(Buffer,0,FileSize);

        FileOutputStream foobj=new FileOutputStream(newFile);
        foobj.write(Buffer,0,FileSize);
    }
}
import java.util.*;
import java.io.*;

class program328
{
    public static void main(String Arg[]) throws Exception
    {
       Scanner sobj=new Scanner(System.in);

       System.out.println("Enter the name of packed file that you want to unpack:");

       String PackedFile=sobj.nextLine();

       File fobj=new File(PackedFile);
       FileInputStream fiobj=new FileInputStream(fobj);

       byte Header[]=new byte[100];
       
       fiobj.read(Header,0,100);
       System.out.println(Header);



    }
}
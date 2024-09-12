import java.util.*;
import java.io.*;

class program314
{
    public static void main(String[] args) {
         Scanner sobj= new Scanner(System.in);

         System.out.println("enter the name of source file which is existing:");
         String SourceFile =sobj.nextLine();

         System.out.println("enter the name of  destination file which is existing:");
         String DestFile =sobj.nextLine();

         File fobj=new File(SourceFile);
         if(! fobj.exists())
         {
            System.out.println("source file is not existing...");
            return;
         }

         File fobj1=new File(DestFile);
         fobj1.createNewFile();

         FileInputStream fiobj=new FileInputStream(SourceFile);
         FileOutputStream foobj =new FileOutputStream(DestFile);

         byte Buffer[]=new byte[1024];
          int iret=0;

          while((iret=fiobj.read(Buffer))!=-1)
          {
            foobj.write(Buffer,0,iret);
          }

          fiobj.close();
          foobj.close();
          
    }
}
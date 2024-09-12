import java.util.*;
import java.io.*;

class split
{
    public static void main(String[] args) 
    {
    Scanner sobj=new Scanner(System.in);
    System.out.println("enter string:");
     String str=sobj.nextLine();

     str=str.trim();
     System.out.println("After trim:"+str);

     str=str.replaceAll("\\s+", ""); // \\s+ =regular expression for remove white spaces but only one 

     System.out.println("after replaceall:"+str);



    }
}
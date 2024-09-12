import java.util.*;
import java.io.*;

class split3
{
    public static void main(String[] args) 
    {
    Scanner sobj=new Scanner(System.in);
    System.out.println("enter string:");
     String str=sobj.nextLine();

     str=str.trim();
     System.out.println("After trim:"+str);

     str=str.replaceAll("\\s+", " "); // \\s+ =regular expression for remove white spaces but only one 

     System.out.println("after replaceall:"+str);

     String words[]=str.split(" ");

     System.out.println("number of words in the sentence are:"+words.length);

     for(String s:words)//foreach
     {
        System.out.println(s);
     }

    }
}
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
     str=str.replaceAll("\\s+", " "); // \\s+ =regular expression for remove white spaces but only one 

    String words[]=str.split(" ");

    for(int i=0;i<words.length;i++)
     {
        System.out.println("worls is:"+words[i]+" having length:"+words[i].length());
     }

    }
}
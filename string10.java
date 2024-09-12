import java.util.*;

class string10
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string:");
        String str=sobj.nextLine();
       
       str=str.trim();
       str=str.replaceAll("\\s+", "");

       String Arr[]=str.split(" ");

       StringBuffer output=new StringBuffer();
       
       StringBuffer word=null;

       int icnt=0;
       for(icnt=0;icnt<Arr.length;icnt++)
       {
        word=new StringBuffer(Arr[icnt]);
        output.append(word.reverse()).append("  ");
       }
         System.out.println(output);
        }
        
    }

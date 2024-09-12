import java.util.*;

class string
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string:");
        String str=sobj.nextLine();
       
        str=str.replaceAll("\\s+", " ");

        String Arr[]=str.split(" ");

        System.out.println("number of words are:"+Arr.length);
    }
}
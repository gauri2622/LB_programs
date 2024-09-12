import java.util.*;

class string
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string:");
        String str=sobj.nextLine();
       
        System.out.println("enter the word we want to search:");
        String word=sobj.nextLine();
        word=word.trim();
        str=str.trim();

        str=str.replaceAll("\\s+", " ");
        
         str=str.replaceAll(word,"");
         str=str.trim();
         str=str.replaceAll("\\s+", " ");
        
            System.out.println("UPdated string is:"+str);
        }
        
    }

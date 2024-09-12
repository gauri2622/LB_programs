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

        String Arr[]=str.split(" ");
        int icnt=0;
        int ifrequency=0;
        for(icnt=0;icnt<Arr.length;icnt++)
        {
            if(word.equals(Arr[icnt]))
            {
                ifrequency++;
            }
            }
            System.out.println("frequency of word is:"+ifrequency);
        }
        
    }

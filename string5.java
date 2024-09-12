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
        int icnt=0;
        int imax=0;
        String maxstr="";
        for(icnt=0;icnt<Arr.length;icnt++)
        {
            if(Arr[icnt].length()>imax)
            {
                imax=Arr[icnt].length();
                maxstr=Arr[icnt];
            }
        }
        System.out.println("largest word is:"+maxstr+"having length"+imax);
    }
}
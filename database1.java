import java.sql.*;

class database1
{
    public static void main(String args[]) throws Exception
     {
        String URL="jdbc:mysql://localhost:3306/ppa49";
        String Username="root";
        String Password="root";
        String Query="select * from student";
        Class.forName("com.mysql.jdbc.Driver");
        Connection cobj=DriverManager.getConnection(URL, Username, Password);
        Statement sobj=cobj.createStatement();
        ResultSet robj=sobj.executeQuery(Query);

        while (robj.next())
         {
           System.out.println("RID:"+robj.getInt("rno"));
           System.out.println("Name:"+robj.getString("name"));
           System.out.println("City:"+robj.getString("address"));
           System.out.println("Marks:"+robj.getInt("marks"));    
        }
            
        

    }
}
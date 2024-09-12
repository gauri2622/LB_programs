import java.sql.*;
 
 class database {

    public static void main(String[] args) throws Exception {
      
         Connection cobj= DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA","root","root");
         Statement sobj=cobj.createStatement();
         ResultSet robj=sobj.executeQuery("select *from student");

         while(robj.next())
         {
            System.out.println("RID:"+robj.getInt("rno"));
            System.out.println("Name:"+robj.getString("name"));
            System.out.println("Address:"+robj.getString("address"));
            System.out.println("Marks:"+robj.getInt("marks"));
         }
    }
}
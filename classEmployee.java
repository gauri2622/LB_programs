class classEmployee
{
String employee_name="ABC";
int employee_id=1120;
String employee_address="Nashik";
String mail_id="ABC@gmail.com";
double mobile_no=8329;
}
class Programmer extends classEmployee
{
double basic_pay=20000;
double DA,HRA,PF,SCF;
void salary()
{
DA=(90*basic_pay)/100;
HRA=(80*basic_pay)/100;
PF=(30*basic_pay)/100;
SCF=(0.1*basic_pay)/100;
}
void pay_slip()
{
System.out.println("The gross salary and net salary of programmer:");
System.out.println("gross salary:"+ (basic_pay+DA+HRA+PF+SCF));
System.out.println("net salary:" +((basic_pay+DA+HRA+PF+SCF)-(PF+SCF)));
}
}
class EmployeeSalary
{
public static void main(String args[])
{
Programmer b = new Programmer();
b.salary();
b.pay_slip();
}
}

import java.util.*;
 
interface Vehicle 
{ 
 void gear_change();
 void speed_up(); 
 void apply_breaks();
}
 class Bicycle implements Vehicle 
 {
  public void gear_change() 
  {
   System.out.println("Fifth gear:"); 
  } 
  public void speed_up() 
  {
   System.out.println("TO change the acceleter:"); 
  } 
  public void apply_breaks() 
  {
   System.out.println("You can apply the break for the stop:"); 
  } 
 } 
 class Bike implements Vehicle 
 {
  public void gear_change() 
  {
   System.out.println("fifth gear:"); 
  } 
  public void speed_up() 
  {
   System.out.println("To change the acceleter:"); 
  } 
  public void apply_breaks() 
  {
   System.out.println("You can apply the breaks:"); 
  } 
 } 
 class Car implements Vehicle 
 {
  public void gear_change() 
  {
   System.out.println("Fourth gear:");
  }
  public void speed_up() 
  {
   System.out.println("To change the acceleter:");
  } 
  public void apply_breaks() 
  {
   System.out.println("You can apply break for the stop the car:");
  } 
 } 
 abstract class Interface implements Vehicle 
 {
  public static void main(String args[]) 
  {
   Bicycle b = new Bicycle();
   b.gear_change();
   b.speed_up();
   b.apply_breaks();
   Bike a = new Bike();
   a.gear_change();
   a.speed_up();
   a.apply_breaks();
   Car c = new Car();
   c.gear_change();
   c.speed_up();
   c.apply_breaks();
  }
 } 
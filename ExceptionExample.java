import java.util.Scanner;

public class ExceptionExample {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            // Getting input from the user
            System.out.print("Enter a number: ");
            int number = Integer.parseInt(scanner.nextLine());

            // Performing a division operation
            int result = 10 / number;

            // Displaying the result
            System.out.println("Result of division: " + result);
        } catch (ArithmeticException e) {
            // Handling division by zero exception
            System.out.println("Error: Division by zero is not allowed.");
        } catch (NumberFormatException e) {
            // Handling invalid input exception
            System.out.println("Error: Please enter a valid number.");
        } finally {
            // Closing the scanner in the finally block to ensure it gets closed
            scanner.close();
        }
    }
}

/*Write a Java program to check if a given integer is even or odd.  */
import java.util.Scanner;
public class Assignment1 {

    public static void main(String[] strings) {
        Scanner in = new Scanner(System.in);
        int number = in.nextInt();
// Check if the number is even or odd
        if (number % 2 == 0) {
            System.out.print("Even");
        } else {
            System.out.print("Odd");
        }
in.close();
    }
}
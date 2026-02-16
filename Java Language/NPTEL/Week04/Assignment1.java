import java.util.Scanner;

public class Assignment1    {

    // Student class with default access variable
    static class Student {

        // No keyword written before int
        // This means default access is applied
        int rollNo;

        // Constructor assigns value to rollNo
        Student(int r) {
            rollNo = r;
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // Read roll number from user
        int r = sc.nextInt();

        // Create object of Student
        Student s = new Student(r);
         System.out.println("Roll Number is: " + s.rollNo);
         sc.close();
    }
}
import java.util.Scanner;
public class Assignment4 {
     private String name;
    private int age;
    public Assignment4(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }
    public void setName(String name){
       this.name = name;
    }
      public void setAge(int age){
        this.age = age;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // System.out.print("Enter student name: ");
        String name = scanner.next();

        // System.out.print("Enter student age: ");
        int age = scanner.nextInt();

        Assignment4 student = new Assignment4(name, age);

        System.out.print("Name: " + student.getName() + ", Age: " + student.getAge());

        scanner.close();
    }
}

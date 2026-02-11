package Daily_Coding_Practice.Java Language.NPTEL.Week02;

public class Assignment2 {
     public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int length = sc.nextInt();
        int width = sc.nextInt();
int perimeter = 2 * (length + width);
// Brackets ensure addition happens before multiplication
System.out.println("Perimeter is: " + perimeter);
        sc.close();
    }
}

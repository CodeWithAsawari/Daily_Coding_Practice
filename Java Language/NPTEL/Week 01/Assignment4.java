import java.util.Scanner;

public class Assignment4 {
        /**
         * @param args
         */
        public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int number = in.nextInt();
// Print the multiplication table
        for (int i = 1; i < 5; i++) {
            System.out.printf("%d x %d = %d\n", number, i, number * i);
        }
in.close();
    }
}

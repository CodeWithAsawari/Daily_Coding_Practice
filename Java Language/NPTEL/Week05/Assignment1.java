 import java.util.Scanner;

interface Number {
    int findSqr(int i);  // Returns the square of n
}
 class Assignment1 implements Number {
      public int findSqr(int i){
    return i*i;
  }
     public static void main (String[] args){ 
	      Assignment1 a = new Assignment1();   //Create an object of class Assignment1
           // Read a number from the keyboard
           Scanner sc = new Scanner(System.in);  
           int i = sc.nextInt();
           System.out.print(a.findSqr(i)); 
    } 
}

/* Exercise 1: Float Input/Output
Practice Problem: Write a C program that takes a floating-point number (a decimal number, like 3.14159) from the user and prints it, formatted to display with only two decimal places.

Expected Output:

Enter a floating-point number (e.g., 3.14159): 75.35678
The number rounded to two decimal places is: 75.36*/
/*
#include<stdio.h>
int main(){
    float pi_value;
    printf("Enter a floating-point number:");
    scanf("%f",&pi_value);
    printf("\n The number rounded to two decimal places is:%.2f",pi_value);


return 0;
} */

/* 
Exercise 2: Calculate Sum
Practice Problems: Write a C program that prompts the user to enter two separate integers, calculates their sum, and then prints the result.

Expected Output:

Enter the first integer: 10
Enter the second integer: 20
The sum of 10 and 20 is: 30*/

/*
#include<stdio.h>
int main() {
    int a,b,sum;
    printf("Enter the first integer: ",a);
    scanf("%d",&a);
    printf("Enter the  second integer: ",b);
    scanf("%d",&b);
    sum = a+b;
    printf("The sum of %d and %d is : %d",a,b,sum);
    return 0;
} */

 /*
Exercise 3: Arithmetic Operations
Practice Problem: Write a C program that calculates and prints the sum, difference, product, and quotient (division) of two integers. 
 Given:

int a, b;
a = 10;
b = 20;
Expected Output:

Sum: 20 + 10 = 30
Difference: 20 - 10 = 10
Product: 20 * 10 = 200
Quotient: 20 / 10 = 2.00 */
/*
#include<stdio.h>
int main(){
    int a,b;
    a =10;
    b =20;
    printf("Sum:%d + %d = %d\n",b,a,b+a);
    printf("Difference:%d - %d = %d\n",b,a,b-a);
    printf("Product:%d * %d = %d\n",b,a,b*a);
      
    if(b!=0){
        printf("\n Quotient: %d/%d = %.2f\n",b,a,(float)a/b);
    }
    else{
        printf("Division by zero is not allowed.\n");
    }
}
*/
/* Exercise 4: Circumference/Area of a Circle
Practice Problem: Write a C program to calculate both the area and circumference of a circle, given its radius. Use a pre-defined constant for π with value 3.14159.

Given:
float radius;
radius = 5;

Expected Output:
Area of the circle: 78.540
Circumference of the circle: 31.416
*/
/*
#include<stdio.h>
int main(){
    float Pi = 3.14159;
    float radius;
    scanf(%f",&radius);
area = Pi*radius*radius;
circumference = 2*Pi*radius;
printf("Area of the circle: %.3f\n",area);
printf("Circumference of the circle: %.3f\n",circumference);
return 0;
} */

/*Exercise 5: Simple Interest
Practice Problem: Calculate simple interest for a loan, given the Principal amount (P), Rate of interest (R), and Time in years (T) as input.

Given:

float principal, rate, time;
principal = 1000;
rate = 8;
time = 3;
Expected Output:

Simple Interest is: 240.00*/

/* #include<stdio.h>
int main(){
    float principal, rate, time, simple_interest;
    principal = 1000;
    rate = 8;
    time = 3;
    simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest is: %.2f\n", simple_interest);
return 0;
} */
// Exercise 6:Swapping Numbers
/* Practice Problem: Write a C program to read two integer values, A and B, and then swap their contents so that A holds the original value of B, and B holds the original value of A. Use a third, temporary variable.

Given:

int A, B;
A = 10;
B = 20;
Expected Output:

--- Before Swap ---
A = 10, B = 20

--- After Swap ---
A = 20, B = 10 */ 
/*
 #include <stdio.h>

int main() {
    int A, B, temp;
    A = 10;
    B = 20;

    printf("\n--- Before Swap ---\n");
    printf("A = %d, B = %d\n", A, B);
    
    // The three-step swap logic
    temp = A;  // Step 1: Store original A
    A = B;     // Step 2: Overwrite A with B's value
    B = temp;  // Step 3: Overwrite B with the original A (stored in temp)

    printf("\n--- After Swap ---\n");
    printf("A = %d, B = %d\n", A, B);

    return 0;
} */
//Exercise 7: Swapping Without Third Variable
/*Practice Problem: Write a C program swap two integer values, A and B, without using a third temporary variable.
Given:

int A, B;
A = 10;
B = 20;
Expected Output:

--- Before Swap ---
A = 10, B = 20

--- After Swap ---
A = 20, B = 10
*/
/*
#include<stdio.h>
int main(){
    int A,B;
    A=10;
    B=20;
    printf("\n--- Before Swap ---\n");
    printf("A = %d, B = %d\n",A,B);
    A =A+B;
    B =A-B;
    A=A-B;
    printf("\n--- After Swap ---\n");
    printf("A = %d, B = %d\n",A,B);
}*
// Exercise 8: ASCII Value
/*Practice Problem: Write a C program that prompts the user to enter a single character and prints its corresponding ASCII (American Standard Code for Information Interchange) value.

Expected Output:

Enter a character: A
The character entered is: A
The ASCII value of 'A' is: 65
*/
/*
#include<stdio.h>
int main(){
    char A;
    printf("Enter a character:%c",A);
scanf("%c",&A);
printf("The character entered is: %c\n",A);
printf("The ASCII value of '%c' is: %d\n",A,A);

}*/
/*Exercise 9: Check Even or Odd
Practice Problem: Write a C program to determines whether given integer is even or odd.

Given:

int num;
num = 12;
Expected Output:

12 is an EVEN number.*/
/*#include<stdio.h>
int main(){
int num;
num=12;
if (num%2==0){
printf("%d is an EVEN number",num);}
else{
    printf("%d is an ODD number",num);
}
return 0;
}*/
/*Exercise 10: Find Largest of Three Numbers
Practice Problem: Write a C program to find and print the largest of given three numbers (A, B, and C).

Given:

int A, B, C;
A = 10;
B = 30;
C = 20;
Expected Output:

B (30) is the largest number.*/
/*#include<stdio.h>
int main(){
int A,B,C;
A=10;
B=30;
C=20;
if (A>=B && A>=C){
    printf("A(%d)is the largest number",A);

}
else if(B>=A && B>=C){
printf("B(%d)is the largest number",B);
}
else{
    printf("C(%d)is the largest number",C);
}
return 0;
}*/
/* Exercise 11: Leap Year Check
Practice Problem: Write a C program to determine if a given year is a leap year.

Leap year: A year is a leap year if it is divisible by 400, OR if it is divisible by 4 but NOT by 100. Use the modulo operator (%) and the logical OR (||) and logical AND (&&) operators.

Given:

int year;
year = 2024;
Expected Output:

2024 is a LEAP YEAR.*/
/*
#include <stdio.h>

int main() {
    int year;
    year = 2024;

    // Leap year conditions:
    // (Divisible by 400) OR (Divisible by 4 AND Not divisible by 100)
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a LEAP YEAR.\n", year);
    } else {
        printf("%d is NOT a leap year.\n", year);
    }

    return 0;
}*/

/*Exercise 11: Leap Year Check
Practice Problem: Write a C program to determine if a given year is a leap year.

Leap year: A year is a leap year if it is divisible by 400, OR if it is divisible by 4 but NOT by 100. Use the modulo operator (%) and the logical OR (||) and logical AND (&&) operators.

Given:

int year;
year = 2024;
Expected Output:

2024 is a LEAP YEAR.
 */
/*
#include <stdio.h>

int main() {
    int year;
    year = 2024;

    // Leap year conditions:
    // (Divisible by 400) OR (Divisible by 4 AND Not divisible by 100)
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a LEAP YEAR.\n", year);
    } else {
        printf("%d is NOT a leap year.\n", year);
    }

    return 0;
}*/
  /*

Exercise 12: Simple Calculator using switch
Practice Problem: Implement a basic calculator that takes two numbers and an operator (+,−,∗,/) as input, and performs the calculation using a switch statement.

Expected Output:

Enter operator (+, -, *, /): *
Enter two operands: 10 20
10.00 * 20.00 = 200.00*/
/*
#include <stdio.h>

int main() {
    char op;
    float num1, num2;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); // Read operator first
    
    printf("\nEnter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch (op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
    }

    return 0;
} */
/*Exercise 13: Print Natural Numbers (for loop)
Practice Problem: Write a C program to print the first 10 natural numbers (1 to 10) in ascending order using a for loop.

Expected Output:

The first 10 natural numbers are:
1 2 3 4 5 6 7 8 9 10 */
#include<stdio.h>
int main(){
int i;
for(i=1;i<=10;i++){
printf("%d",i);
}
printf("\n");
return 0;
}
/*Exercise 14: Print Numbers in Reverse (while loop)
Practice Problem: Write a C program to print numbers from 10 down to 1 in descending order using a while loop.

Expected Output:

Numbers in reverse order:
10 9 8 7 6 5 4 3 2 1*/
#include <stdio.h>

int main() {
    int i = 10;  

    printf("Numbers in reverse order:\n");
    
     while(i >= 1) {
        printf("%d ", i);
        i--;  
    }
    printf("\n");

    return 0;
}
/*Exercise 15: Sum of Natural Numbers
Practice Problem: Write a C program to calculate and print the sum of the first N natural numbers.

Given:

int N;
N = 10;
Expected Output:

The sum of the first 10 natural numbers is: 55*/
 #include<stdio.h>
 int main(){
     int N,i,sum=0;
     N=10;
     for(i=1;i<=N;i++){
         sum=sum+i;
     }
     printf("The sum of the first %d natural numbers are: %d",N,sum);
     return 0;
 }
 /*Exercise 16: Print odd numbers from 1 to 20
Practice Problem: Write a C program to print odd numbers between 1 and 20 using a do...while loop.

Expected Output:

1 3 5 7 9 11 13 15 17 19*/
 #include<stdio.h>
 int main(){
     int i=1;
     do{
         printf("%d ",i);
         i+=2;
     }
     while(i<=20);
     return 0;
 }
 /*Exercise 17: Multiplication Table
  Practice Problem: Write a C program to print the multiplication table of a given integer N from 1 × N up to 10 × N.

Given:

int N;
N = 2;
Expected Output:

Multiplication Table for 2:
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
....
2 x 10 = 20*/
#include <stdio.h>

int main() {
    int N,i;
    N=2;
    printf("Multiplication Table for 2:\n",N);
    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",N,i,N*i);
    }

    return 0;
}
  
 /*Exercise 18: Do-While Menu
Create a simple menu-driven program that displays options (“1. Greet”, “2. Say Goodbye”, “3. Exit”). Use a do-while loop and a switch statement to repeatedly show the menu and process the user’s choice until they select the ‘Exit’ option.
 */
 #include <stdio.h>

int main() {
 int choice;
 do{
     printf("\n ----Menu----\n");
     printf("1.Greet\n");
     printf("2.Say Goodbye\n");
     printf("3.Exit\n");
     printf("Enter your choice(1-3):");
     scanf("%d",&choice);
     
     switch(choice){
         case 1:
         printf("Hello!Welcome to the program.\n");
         break;
         
         case 2:
         printf("Goodbye!Have a nice day.\n");
         break;
         
         case 3:
         printf("Exiting program.Thank you!\n");
         break;
         
         default:
         printf("Invalid choice.Please enter 1,2,or 3.\n");
    }
 }
 while(choice!=3);
 return 0;
 }

  /*Exercise 19: Factorial of a Number
Practice Problem: Write a C program to calculate the factorial of a given non-negative integer N. (The factorial of N is the product of all positive integers less than or equal to N, denoted N!).
Given:

int N;
N = 5;
Expected Output:

The factorial of 5 is: 120*/
 #include<stdio.h>
 int main(){
     int i,N;
     N=5;
     long long fact=1;
     if(N<0){
         printf("Error:The factorial for negative integer is not defined");
     }
     else {
         for(i=1;i<=N;i++){
             fact*=i;
         }
         printf("The factorial of %d is: %d",N,fact);
     }
     return 0;
 }
 /*Exercise 20: Count Digits
 Practice Problem: Write a C program to counts the total number of digits in a given number.

Given:

long long num = 3456;
Expected Output:

The number 3456 has 4 digits.*/
 #include<stdio.h>
 int main(){
    int num=3456;
     int count =0;
     int original_num=num;
     if(num==0){
         count=1;
     }
     else{
         while(num>0){
             num/=10;
             count++;
         }
     }
     printf("The number %d has %d digits.\n",original_num,count);
     return 0;
     
     
 }
 /*Exercise 21: Reverse a Number
Practice Problem: Write a C program to reverse a given integer (e.g., 1234 becomes 4321).

Given:

int num = 123
Expected Output:

The reverse of 123 is: 321*/
 #include <stdio.h>

int main() {
    int num = 123, reversed_num = 0, remainder;
    
    int original_num = num;

    while (num != 0) {
        remainder = num % 10; // 1. Extract the last digit
        reversed_num = reversed_num * 10 + remainder; // 2. Build the reversed number
        num /= 10; // 3. Remove the last digit
    }

    printf("The reverse of %d is: %d\n", original_num, reversed_num);

    return 0;
}
/*Exercise 22: Check Palindrome
Practice Problem: Write a C program to check if a given integer is a palindrome (reads the same forwards and backward, e.g., 121,3553).

Given:

int num = 121
Expected Output:

121 is a PALINDROME*/
#include <stdio.h>

int main() {
    int num = 121, original_num, reversed_num = 0, remainder;
    
    original_num = num; // Crucial: save the original value

    // Logic to reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    // Check if the original and reversed numbers are the same
    if (original_num == reversed_num) {
        printf("%d is a PALINDROME.\n", original_num);
    } else {
        printf("%d is NOT a palindrome.\n", original_num);
    }

    return 0;
}
/*Exercise 23: Skip Even Numbers
Practice Problem: Write a C program to print all odd numbers between 1 and N using a single for loop and use the continue keyword to skip the even numbers.

Given:

int N = 20;
Expected Output:

Odd numbers from 1 to 20:
1 3 5 7 9 11 13 15 17 19*/
#include <stdio.h>

int main() {
    int N = 20, i;

    printf("Odd numbers from 1 to %d:\n", N);

    for (i = 1; i <= N; i++) {
        // Control flow check for even numbers
        if (i % 2 == 0) {
            continue; // Skips the rest of the loop body for even numbers
        }

        // This line only executes if 'i' is ODD
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

/*Exercise 24: Fibonacci Series
Practice Problem: Write a C program to print the first N terms of the Fibonacci series. (The series starts with 0, 1 and each subsequent number is the sum of the two preceding ones: 0,1,1,2,3,5,8,…).

Given:

int N = 8;
Expected Output:

Fibonacci Series up to 8 terms:
0, 1, 1, 2, 3, 5, 8, 13,*/
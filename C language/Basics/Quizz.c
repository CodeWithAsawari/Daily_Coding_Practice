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
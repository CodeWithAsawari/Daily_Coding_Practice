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
/* Exercise 1: Float Input/Output
Practice Problem: Write a C program that takes a floating-point number (a decimal number, like 3.14159) from the user and prints it, formatted to display with only two decimal places.

Expected Output:

Enter a floating-point number (e.g., 3.14159): 75.35678
The number rounded to two decimal places is: 75.36*/
/*#include<stdio.h>
int main(){
    float pi_value;
    printf("Enter a floating-point number:");
    scanf("%f",&pi_value);
    printf("\n The number rounded to two decimal places is:%.2f",pi_value);


return 0;
}*/

/* 
Exercise 2: Calculate Sum
Practice Problems: Write a C program that prompts the user to enter two separate integers, calculates their sum, and then prints the result.

Expected Output:

Enter the first integer: 10
Enter the second integer: 20
The sum of 10 and 20 is: 30*/

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
}
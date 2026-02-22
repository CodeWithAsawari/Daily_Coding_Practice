//C Introduction
//C is a general-purpose programming language created by Dennis Ritchie at Bell Labs in 1972.
//It is a powerful and efficient language that is widely used for system programming, embedded systems, and application development.
//C is a procedural programming language, which means that it focuses on writing procedures or routines to perform specific tasks.
//C is a compiled language, which means that the source code is translated into machine code by a compiler before it can be executed.
//C is a low-level language, which means that it provides direct access to memory and hardware, making it suitable for system programming and performance-critical applications.

//What is C used for?
/* C is often used to create programs that need to run fast and work closely with the computer.

-Operating systems, such as parts of Windows, Linux, and macOS
-Programs inside devices like cars, TVs, and home electronics
-Software that needs to be fast, including databases and system tools
-Game engines and programs that handle graphics
-Core libraries that other programming languages rely on*/

//C Syntax

#include<stdio.h>
int main(){
    printf("Hello World!");
    return 0;
}
 /*
 Line 1: #include <stdio.h> tells C to include a header file. This header lets us use input/output functions such as printf() (used in line 4).

Line 2: A blank line. C ignores extra spaces and blank lines, but we use them to make the code easier to read.

Line 3: main() is a special function. Your program starts running here. Any code inside the curly brackets {} will be executed.

Line 4: printf() is a function used to output (print) text to the screen. In our example, it prints Hello World!.

Note: Every C statement ends with a semicolon ;

Note: The body of int main() could also be written as:
int main(){printf("Hello World!");return 0;}

Remember: The compiler ignores extra spaces and new lines, but using multiple lines makes code easier to read.

Line 5: return 0 ends the main() function and sends a value back to the operating system.

Returning 0 usually means "everything worked". You will learn more about return values later.

Line 6: Do not forget the closing curly bracket } to end the main() function.*/


//C Output

// printf() used

// for new line (\n) is used
/* What is \n exactly?
\n is called an escape sequence.

Escape sequences start with a backslash and represent special characters that cannot be typed directly.

In this case, \n tells the program to move the cursor to the beginning of the next line.

Here are some other common escape sequences:

Escape Sequence	    Description

\t	               Inserts a horizontal tab	
\\	               Inserts a backslash character (\)	
\"	               Inserts a double quote character

*/

//Comments in C

/*Comments are notes for humans. They help explain code and make it easier to read.

They can also be used to temporarily "disable" code while testing.

Comments can be single-line or multi-line.

Single-line Comments : Single-line comments start with two forward slashes (//).

Multi-line Comments: Multi-line comments start with /* and end with */


//C Variables

/*
Variables are containers for storing data values, like numbers and characters.

You can think of a variable as a named box where you keep a value that can be used later.

In C, variables must have a specific type, which tells the program what kind of data the variable can store.

int - stores whole numbers (integers), such as 123 or -123
float - stores numbers with decimals, such as 19.99 or -19.99
char - stores a single character, such as 'a' or 'B'. Characters are surrounded by single quotes*/

//Declaring (Creating) Variables

//Syntax
//type variableName = value;

//Output Variables   printf()


//C Format Specifiers
/*
Format specifiers are used together with the printf() function to print variables.

You can think of a format specifier as a placeholder that tells C what kind of value will be printed.

A format specifier always starts with a percentage sign %, followed by a letter.

For example, to output the value of an int variable, use the format specifier %d surrounded by double quotes (""), inside the printf() function:

Example */
int myNum = 15;
printf("%d", myNum); // Outputs 15

//Different data types use different format specifiers

Example
// Create variables
int myNum = 15;            // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);

//Change Variable Values

int a=2;
int b=9;
a=b;
printf("%d",a); // Outputs 9 because a now holds the value of b

/*The general rules for naming variables are:

Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case-sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (such as int) cannot be used as names*/

//Example:
#include<stdio.h>
int main(){
int length;
int width;
int area;
area=length*width;
printf("Enter length:");
scanf("%d",&length);
printf("Enter width:");
scanf("%d",&width);
printf("Area of rectangle is:%d",area);
return 0;
}
//C Data Types
/*Basic Data Types
The data type specifies the size and type of information the variable will store.

In this tutorial, we will focus on the most basic ones:

Data Type   	Size	       Description	
int	        2 or 4 bytes	   Stores whole numbers, without decimals	
float	    4 bytes	           Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
double	    8 bytes        	   Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
char	    1 byte	           Stores a single character/letter/number, or ASCII values	*/


//The char Type
/*The char data type is used to store a single character.

The character must be surrounded by single quotes, like 'A' or 'c', and we use the %c format specifier to print it:
*/

//Numeric Types
/*Use int when you need to store a whole number without decimals, like 35 or 1000, and float or double when you need a floating point number (with decimals), like 9.99 or 3.14515.
*/
int a=3;
printf("%d",a); // Outputs 3

float b=3.14;
printf("%f",b); // Outputs 3.140000

double c=3.141592653589793;
printf("%lf",c); // Outputs 3.141593 (rounded to 6 decimal places)
//Scientific Numbers
/*In C, you can write very large or very small floating-point numbers using scientific notation.

This is done using the letter e (or E), which stands for "times 10 to the power of".

For example, 35e3 means 35 × 10³ = 35000.*/

float d = 35e3; // This is 35 × 10³
printf("%f", d); // Outputs 35000.000000


//C Decimal Precision

//Set Decimal Precision
//If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point:

float e = 3.14159;
printf("%.1f", e); // Outputs 3.1 (rounded to 1 decimal place)
printf("%.2f", e); // Outputs 3.14 (rounded to 2 decimal places)
printf("%.3f", e); // Outputs 3.142 (rounded to 3 decimal places)

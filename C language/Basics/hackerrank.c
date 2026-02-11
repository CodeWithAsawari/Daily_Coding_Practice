// CHALLENGE 1
//"Hello World!" in C

/* Objective

In this challenge, we will learn some basic concepts of C that will get you started with the language. You will need to use the same syntax to read input and write output in many C challenges. As you work through these problems, review the code stubs to learn about reading from stdin and writing to stdout.

Task

This challenge requires you to print  on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.
*/ 
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");
    printf("%s",s);
     
    return 0;
}

// CHALLENGE 2
//Playing With Characters
/*
Objective

This challenge will help you to learn how to take a character, a string and a sentence as input in C.

To take a single character  as input, you can use scanf("%c", &ch ); and printf("%c", ch) writes a character specified by the argument char to stdout

Task

You have to print the character, , in the first line. Then print  in next line. In the last line print the sentence, .

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{ char ch;
char s[100];
char sen[100];
scanf("%c",&ch);
scanf("%s", s);
scanf("\n");
scanf("%[^\n]%*c",sen);
printf( "%c\n",ch);
printf("%s\n",s);
printf("%s\n",sen);

 /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
// CHALLENGE 3
// Sum and Difference of Two Numbers
/* Objective

The fundamental data types in c are int, float and char. Today, we're discussing int and float data types.

The printf() function prints the given statement to the console. The syntax is printf("format string",argument_list);. In the function, if we are using an integer, character, string or float as argument, then in the format string we have to write %d (integer), %c (character), %s (string), %f (float) respectively.

The scanf() function reads the input data from the console. The syntax is scanf("format string",argument_list);. For ex: The scanf("%d",&number) statement reads integer number from the console and stores the given value in variable .

To input two integers separated by a space on a single line, the command is scanf("%d %d", &n, &m), where  and  are the two integers.

Task

Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

Declare  variables: two of type int and two of type float.
Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
Use the  and  operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line. */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int number1, number2;
    float number3, number4;
    
    scanf("%d %d", &number1, &number2);
    scanf("%f %f", &number3, &number4);
    
    printf("%d %d\n", (number1 + number2), (number1 - number2));
    printf("%.1f %.1f", (number3 + number4), (number3 - number4));
    
    
    return 0;
}

// CHALLENGE 4
//Functions in C
/*Objective

In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements grouped together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.
Task

Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.*/
#include <stdio.h>
int max_of_four(int a, int b, int c, int d){
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
// CHALLENGE 5
// Pointers in C
/* Objective

In this challenge, you will learn to implement the basic functionalities of pointers in C. A pointer in C is a way to share a memory address among different contexts (primarily functions).
Task

Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of  to their sum, and  to their absolute difference. There is no return value, and no return statement is needed.

*/
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
// CHALLENGE 6
// Conditional Statements in C
/*Objective

if and else are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements.
 Task

Given a positive integer denoting , do the following:

If , print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If , print Greater than 9.*/
 
#include <stdio.h>



int main() {
    
    short number;
    
    scanf("%hd", &number);
    
    
    if (number > 9) {
        printf("Greater than 9\n");
    } else {
        
        if (number == 1) {
            printf("one\n");
        }
        
        if (number == 2) {
            printf("two\n");
        }
        
        if (number == 3) {
            printf("three\n");
        }
        
        if (number == 4) {
            printf("four\n");
        }
        
        if (number == 5) {
            printf("five\n");
        }
        
        if (number == 6) {
            printf("six\n");
        }
        
        if (number == 7) {
            printf("seven\n");
        }
        
        if (number == 8) {
            printf("eight\n");
        }
        
        if (number == 9) {
            printf("nine\n");
        }
    }
    
    
    return 0;
}


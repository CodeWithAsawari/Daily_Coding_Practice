//Operators
//Operators are used to perform operations on variables and values
/*  ARITHMETIC OPERATORS
+ Operator: Addition - used to add two numbers together
- Operator: Subtraction - used to subtract one number from another      
* Operator: Multiplication - used to multiply two numbers together
/ Operator: Division - used to divide one number by another
% Operator: Modulus - used to find the remainder of a division operation
Example:*/

#include<stdio.h>
int main(){
        int x=5;
        int y=3;
        printf("%d",x+y);
        printf("%d",x-y);
        printf("%d",x*y);   
        printf("%d",x/y);
        printf("%d",x%y);
    printf("++x = %d\n",++x); // Pre-increment: x is incremented before being used
    printf("x++ = %d\n",x++); // Post-increment: x  is used before being incremented
    printf("x = %d\n",x); // x is now 7 after the post-increment
    printf("--y = %d\n",--y); // Pre-decrement: y is    decremented before being used
    printf("y-- = %d\n",y--); // Post-decrement: y  is used before being decremented
    printf("y = %d\n",y); // y is now 1 after the post-decrement
        return 0;
} 


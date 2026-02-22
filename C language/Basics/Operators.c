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

//Assignment Operators
/*
=	Assigns a value to a variable
+=	Adds and assigns a value to a variable
-=	Subtracts and assigns a value to a variable
*=	Multiplies and assigns a value to a variable
/=	Divides and assigns a value to a variable
%=	Modulus and assigns a value to a variable
&=	Bitwise AND and assigns a value to a variable
|=	Bitwise OR and assigns a value to a variable
^=	Bitwise XOR and assigns a value to a variable
<<=	Left shift and assigns a value to a variable
>>=	Right shift and assigns a value to a variable

*/
//Example:
#include<stdio.h>
int main(){
    int a=10;
    a+=5; // Equivalent to a = a + 5
    printf("a = %d\n",a); // Outputs 15
    a-=3; // Equivalent to a = a - 3
    printf("a = %d\n",a); // Outputs 12
    a*=2; // Equivalent to a = a * 2
    printf("a = %d\n",a); // Outputs 24
    a/=4; // Equivalent to a = a / 4
    printf("a = %d\n",a); // Outputs 6
    a%=4; // Equivalent to a = a % 4
    printf("a = %d\n",a); // Outputs 2
    a&=1; // Equivalent to a = a & 1
    printf("a = %d\n",a); // Outputs 0 (since 2 in binary is 10 and 1 in binary is 01, the bitwise AND is 00 which is 0 in decimal)
    a|=1; // Equivalent to a = a | 1
    printf("a = %d\n",a); // Outputs 1 (since 0 in binary is 00 and 1 in binary is 01, the bitwise OR is 01 which is 1 in decimal)
    a^=1; // Equivalent to a = a ^ 1
    printf("a = %d\n",a); // Outputs 0 (since 1 in binary is 01 and 1 in binary is 01, the bitwise XOR is 00 which is 0 in decimal)
    a<<=2; // Equivalent to a = a << 2
    printf("a = %d\n",a); // Outputs 0 (since 0 in binary is 00, left shifting by 2 positions results in 0000 which is still 0 in decimal)
    a>>=1; // Equivalent to a = a >> 1
    printf("a = %d\n",a); // Outputs 0 (since 0 in binary is 00, right shifting by 1 position results in 0000 which is still 0 in decimal)

    return 0;
}
//Comparison Operators
/*
==	Equal to (checks if two values are equal)
!=	Not equal to(checks if two values are not equal)
>	Greater than(checks if the left value is greater than the right value)
<	Less than(checks if the left value is less than the right value)
>=	Greater than or equal to(checks if the left value is greater than or equal to the right value)
<=	Less than or equal to(checks if the left value is less than or equal to the right value)
*/
//Example:
#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    printf("a == b: %d\n",a==b); // Outputs 0 (false)
    printf("a != b: %d\n",a!=b); // Outputs 1 (true)
    printf("a > b: %d\n",a>b); // Outputs 0 (false)
    printf("a < b: %d\n",a<b); // Outputs 1 (true)
    printf("a >= b: %d\n",a>=b); // Outputs 0 (false)
    printf("a <= b: %d\n",a<=b); // Outputs 1 (true)

    return 0;
}
// Logical Operators
/*&&	Logical AND (returns true if both operands are true)
||	Logical OR (returns true if at least one operand is true)
!	Logical NOT (returns true if the operand is false)*/
//Example:
#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    printf("(a > 5) && (b < 30): %d\n",(a > 5) && (b < 30)); // Outputs 1 (true)
    printf("(a > 15) || (b < 30): %d\n",(a > 15) || (b < 30)); // Outputs 1 (true)
    printf("!(a > 5): %d\n",!(a > 5)); // Outputs 0 (false)
    printf("!(b < 30): %d\n",!(b < 30)); // Outputs 0 (false)
    return 0;
}

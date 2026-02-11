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

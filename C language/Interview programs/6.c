//CALCULATOR USING SWITCH CASE
#include<stdio.h>
int main(){
printf("Enter the first number: ");
int a,b;
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%d",&b);
char op="+-*/";
switch(op){
    case '+':printf("The sum is %d",a+b);break;
    case '-':printf("The difference is %d",a-b);break;
    case '*':printf("The product is %d",a*b);break;
    case '/':printf("The quotient is %d",a/b);break;
    default:printf("Invalid operator");
}
}
//Armstrong Number
#include <stdio.h>
#include <math.h>

int main() {
    int num=153, original, rem, result=0, n=0;
    original=num;

    while(original!=0){
        original/=10;
        n++;
    }

    original=num;

    while(original!=0){
        rem=original%10;
        result += pow(rem,n);
        original/=10;
    }

    if(result==num)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}

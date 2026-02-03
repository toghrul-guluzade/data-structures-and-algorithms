#include <stdio.h>
#include <math.h>


/*
Find the sum of the digits of the integer n.

Input
One 32-bit integer n (the number can be negative).

Output
Print the sum of the digits of the number n.

Examples
Input #1
321
Answer #1
6

*/
int sum(int n){
    if(n / 10 != 0){
        return n;
    } else{
        return n % 10 + sum(n/10);
    }
}

int main(){
    int n;

    scanf("%d", &n);

    n=abs(n);
    printf("%d", sum(n));

    return 0;
}
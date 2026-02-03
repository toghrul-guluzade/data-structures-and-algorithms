#include <stdio.h>



/*
Calculate the factorial of a number.

Input
One integer n is given, where 0≤n≤20.

Output
Output the value of n!=1⋅2⋅3⋅…⋅n.

Examples
Input #1
3
Answer #1
6

*/

long long f(long long n){
    if(n == 0 || n == 1) return 1;

    return n * f(n-1);
}

int main(){

    long long n;
    scanf("%lld", &n);
    printf("%lld", f(n));


    return 0;
}
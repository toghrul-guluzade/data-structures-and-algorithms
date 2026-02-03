#include <stdio.h>

/*
Find the value of the sum 
(1^n + 2^n + 2⋅3^n + 3⋅4^n + 4⋅5^n + … + 99⋅100^n) mod m.

Input
Two positive integers n and m (n,m≤10 
8
 ).

Output
Print the value of the sum modulo m.

Examples
Input #1
12345678 35242346
Answer #1
5447885

*/

long long powmod(long long x, long long n, long long mod){
    if(n==0) return 1;

    if(n % 2 == 0) return powmod((x*x) % mod, n/2, mod);
    return (x * powmod(x, n-1, mod)) % mod;


}

int main(){

    long long n, m;

    scanf("%lld %lld", &n, &m);

    long long result = (powmod(1, n, m) + powmod(2, n, m)) % m;

    for(long long i = 3; i <= 100; i++){
        result = (result + (i-1) * powmod(i, n, m)) % m;
    }

    printf("%lld", result);


    return 0;
}
#include <stdio.h>



/*

Find the value of the expression x 
n
  mod m.

Input
Three positive integers x,n,m (1≤x,n≤10 
9
 ,2≤m≤10 
9
 ).

Output
Print the value of x 
n
  mod m.

Examples
Input #1
2 3 100
Answer #1
8

*/

long long powmod(long long x, long long n, long long mod){

    if(n == 0) return 1;

    long long half;

    if(n % 2 == 0){
      half = powmod(x, n/2, mod);
      return (half * 2) % mod;
    } else {
      half = powmod(x, (n-1)/2, mod);
      return (x*(2*half)) % mod;
    }
    
}


int main(){

    long long x, n, m;

    scanf("%lld %lld %lld", &x, &n, &m);

    printf("%lld", powmod(x, n, m));



    return 0;
}
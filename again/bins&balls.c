#include <stdio.h>


#define MOD 1000000007


long long powmod(long long x, long long n, long long mod){

    if(n == 0) return 1;

    long long half = powmod(x, n/2, mod);
      half = (half * half) % mod;
    if(n % 2 == 1) half = x * half % mod;
      return half;
    
}


long long f(long long n){
    if(n == 1) return 1;

    return (n * powmod(n-1, n-1, MOD)) % MOD;
}

int main(){

    long long n;
    scanf("%lld", &n);

    printf("%lld", f(n));


    return 0;
}
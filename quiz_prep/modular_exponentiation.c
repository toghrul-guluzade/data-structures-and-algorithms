#include <stdio.h>



long long powmod(long long x, long long n, long long mod){
    if(n == 0) return 1;
    if(n == 1) return x;

    long long half = powmod(x, n/2, mod);
    half = (half * half) % mod;
    if(n % 2 == 0){
        return half;
    } 
    return (x * half) % mod;
}





int main(){

    long long x, n, m;
    scanf("%lld %lld %lld", &x, &n, &m);

    printf("%lld", powmod(x, n, m));



    return 0;
}
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

    long long n, m;
    scanf("%lld %lld", &n, &m);

    long long result = 1;

    for(int i = 1; i <= 100; i++){
        result = (result + ((i - 1) * powmod(i, n, m))) % m;
    }

    printf("%lld", result);



    return 0;
}
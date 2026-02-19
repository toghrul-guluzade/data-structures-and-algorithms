#include <stdio.h>

long long powmod(long long n, long long k, long long mod){
    if(n == 0) return 0;
    if(k == 0) return 1;

    long long half = powmod(n, (k/2), mod);
    half = (half * half) % mod;

    if(k % 2 == 0) {

        return half % mod;

    } else {

        return (n * half) % mod;

    }

}

int main() {
    // your code goes here
    long long n, k, mod;

    scanf("%lld %lld %lld", &n, &k, &mod);

    printf("%lld", powmod(n, k, mod));

}

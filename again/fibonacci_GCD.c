#include <stdio.h>
#include <stdint.h>

#define MOD 100000000ULL


 uint64_t memo[1000];

 uint64_t f(long long n){

    if(n <= 1) return 1;
    if(memo[n] != -1) return memo[n];

    memo[n] = f(n - 1) + f(n - 2);
    return memo[n];


}

uint64_t gcd(uint64_t a, uint64_t b){
    if(b == 0) return a;
    if(a == 0) return b;

    if(a >= b){
        return gcd(a%b, b);
    } else{
        return gcd(a, b%a);
    }
}


int main(){

    uint64_t n, k;

    while(( scanf("%llu %llu", &n, &k)) == 2){
        for (int i = 0; i < 1000; i++) memo[i] = -1;
    
   
    
    n = f(n);
    k = f(k);

    printf("%llu", gcd(n, k));

    }


    return 0;
}
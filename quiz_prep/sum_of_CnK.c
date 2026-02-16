#include <stdio.h>



unsigned long long f(unsigned long long n){
    if(n == 0 || n == 1) return 1;

    return n * f(n-1);

}


unsigned long long CnK(unsigned long  long n, unsigned long long k){
    if (k < 0 || k > n) return 0;

    unsigned long long numerator = f(n);
    unsigned long long denominator = f(n-k) * f(k);

    return numerator / denominator;
}


unsigned long long square(long long x) {return x*x;}


int main(){


    unsigned long long n;
    scanf("%llu", &n);
    
    unsigned long long result = 1;

    for(unsigned long long i = 1; i <= n; i++){
        result = result + square(CnK(n, i));

    }

    printf("%llu", result);
    

    return 0;
}
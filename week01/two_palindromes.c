#include <stdio.h>
#include <math.h>

#define MOD 1000000007



long long  powmod(long long x, long long n, long long m){
    if(n == 0)  return 1;
    long long half = powmod(x, n/2, m);
    half = (half * half) % m;
    if(n % 2 == 1) half = x * half % m;

    return half;
}



long long  count_palindromes(long long n, long long k){

    long long exponend = (n+1)/2;
    
    return powmod(k, exponend, MOD);

}



int main (){

    long long n, k  ;

    scanf("%lld %lld", &n, &k);
    long long total = 0;
    for(long long i = 1; i < n; i++){
        // First palindrome: length i
        // Second palindrome: length n-i
        long long ways = (count_palindromes(i, k) * count_palindromes(n-i, k)) % MOD;
        total = (total + ways) % MOD;
}
    printf("%lld", total);
    return 0; 
}
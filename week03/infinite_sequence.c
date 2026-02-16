#include <stdio.h>

const long long size = 1000000000001;
long long dp[size];


long long f(long long n, long long p, long long q){
    if(n == 0) return 1;
    if(dp[n] != -1) return dp[n];

    long long a = f(n/p, p, q);
    long long b = f(n/q, p, q);

    dp[n] = a + b;
    return dp[n];
}

int main(){

    long long n, p, q;

    dp[0] = 1;
    for(long long i = 1; i < size; i++){
        dp[i] = -1;
    }   

   scanf("%lld %lld %lld", &n, &p, &q);

   printf("%lld", f(n, p, q));


    return 0;
}
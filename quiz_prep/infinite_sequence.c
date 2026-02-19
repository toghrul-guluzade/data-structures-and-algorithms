#include <stdio.h>

long long dp[10000001];


long long f(long long n, long long p, long long q){
    if(n == 0) return 1;

    if(dp[n] != -1) return dp[n];

    dp[n] = f(n/p, p, q) + f(n/q, p, q);

    return dp[n];
}


int main(){

    long long n, p, q;
    scanf("%lld %lld %lld", &n, &p, &q);

    printf("%lld", f(n, p, q));


    return 0;
}
#include <stdio.h>

#define MOD 123456789
long long dp[1000001];

long long f(long long n){
    if(n == 1 | n == 2) return 1;
    if(dp[n] != -1) return dp[n];

    dp[n] = (2 * f(n-1)) % MOD;

    return dp[n];
}


int main(){

    long long n;
    scanf("%lld", &n);


    for(long long i = 1; i < 1000001; i++){
        dp[i] = -1;
    }
    dp[0] = 1;
    dp[1] = 1;

    printf("%lld", f(n));


    return 0;
}
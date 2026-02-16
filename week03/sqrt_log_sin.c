#include <stdio.h>
#include <math.h>

#define MOD 1000000

long long dp[1000001];

long long f(long long n){
    if(n == 0) return 1;
    if(dp[n] != -1) return dp[n];

    long long a = f((long long)(floor(n - sqrt(n))));
    long long b = f((long long)floor(log(n)));
    long long c = f((long long)floor(n * pow(sin(n), 2)));

    dp[n] = (a + b + c) % MOD;
    return dp[n];
}

int main(){

    long long n;
    for(int i = 0; i < 1000001; i++){
    dp[i] = -1;
    }
    dp[0] = 1;
    while(scanf("%lld", &n) == 1){
        if(n == -1) break;

        long long result = f(n);

        printf("%lld\n", result);

    }



    return 0;
}
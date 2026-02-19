#include <stdio.h>
#include <math.h>


#define MOD 1000000

long long dp[1000001];

long long f(long long n){
    if(n <= 0) return 1;

    if(dp[n] != -1) return dp[n];
    
    long long a = (long long)floor(n - sqrt(n));
    long long b = (long long) floor(log(n));
    long long c = (long long) floor(n * pow(sin(n), 2));

    dp[n] = (f(a) + f(b) + f(c)) % MOD;

    return dp[n];
}


int main(){
    long long n;

    for(int i = 1; i <= 1000001; i++){
        dp[i] = -1;
    }

    dp[0] = 1;

    while(scanf("%lld", &n) == 1){
        if(n == -1) break;
        printf("%lld\n", f(n));

    }


    return 0;
}
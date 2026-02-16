#include <stdio.h>

long long dp[45];

long long f(long long n){

    if(n == 0) return 1;
    if(n == 1) return 1;

    if(dp[n] != -1) return dp[n];

    dp[n] = f(n-1) + f(n-2);

    return dp[n];

}


int main(){

    long long n;
    scanf("%lld", &n);

    for(int i = 0; i <= 45; i++){
        dp[i] = -1;
    }

    printf("%lld", f(n));

    return 0;
}
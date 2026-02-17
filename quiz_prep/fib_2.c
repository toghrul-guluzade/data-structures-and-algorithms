#include <stdio.h>

long long dp[45];

long long fib(long long n){
    if(n == 0 || n == 1) return 1;
    if(dp[n] != -1) return dp[n];

    dp[n] = fib(n-1) + fib(n-2);
    return dp[n]; 
}


int main(){

    long long n;
    scanf("%lld", &n);

    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i <= 45; i++){
        dp[i]=-1;
    }

    printf("%d", fib(n));


    return 0;
}
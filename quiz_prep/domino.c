#include <stdio.h>

long long dp[1000001];

long long domino(long long n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(dp[n] != -1) return dp[n];

    dp[n] = domino(n-1) + domino(n-2);

    return dp[n];

}


int main(){

    long long n;
    scanf("%lld", &n);
    
    dp[1] = 1;
    dp[2] = 2;

    for (long long i = 3; i < n; i++)
    {
        dp[i] = -1;
    }
    
    printf("%lld", domino(n));
    return 0;
}
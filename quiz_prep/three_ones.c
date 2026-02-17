#include <stdio.h>

long long dp[1000001];

long long f(long long n){

    if(n == 1) return 2;
    if(n == 2) return 4;
    if(n == 3) return 7;

    if(dp[n] != -1) return dp[n];

    dp[n] = (f(n-1) + f(n-2) + f(n-3)) % 12345;
    return dp[n];

}


int main(){

    long long n;
    scanf("%lld", &n);

    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    
    printf("%d", f(n));

    return 0;
}
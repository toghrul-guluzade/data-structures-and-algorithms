#include <stdio.h>


long long dp[45];

long long f(int n){
    if(n == 1) return 2;
    if(n == 2) return 3;
    
    if(dp[n] != -1) return dp[n];

    dp[n] = f(n-1) + f(n-2);

    return dp[n];
}



int main(){
    int n;
    scanf("%d", &n);

   

    for(int i = 0; i <= n; i++){
        dp[i]= -1;  
    }

    printf("%lld", f(n));

    return 0;
}
#include <stdio.h>

#define MOD 12345

long long memo[100001];

long long f(long long n){

    if(n == 1) return 2;
    if(n == 2) return 4;
    if(n == 3) return 7;

    if(memo[n] != -1) return memo[n];

    memo[n] = (f(n - 1) + f(n - 2) + f(n - 3)) % MOD;
    return memo[n];


}



int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) memo[i] = -1;
 

    printf("%lld", f(n));


    return 0;
}
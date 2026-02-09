#include <stdio.h>

long long memo[1000];

long long f(long long n){

    if(n <= 1) return 1;
    if(memo[n] != -1) return memo[n];

    memo[n] = f(n - 1) + f(n - 2);
    return memo[n];


}



int main(){

    long long n;

    for (int i = 0; i < 1000; i++) memo[i] = -1;
    
    scanf("%lld", &n);
    
    printf("%lld", f(n));
    return 0;
}
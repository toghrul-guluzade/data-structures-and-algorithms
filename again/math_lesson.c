#include <stdio.h>
#include <math.h>

int memo[1001];

long long factorization(long long n){
    if(n < 2) return 0;
    for(long long i = 2; i <= sqrt(n); i++){
        if(n % i != 0) memo[i]++;
    }  
}

int main(){


    long long n;

    int first = 1;
    int cnt = 0;
    scanf("%lld", &n);

    for(int i = 2; i <= sqrt(n); i++){

        if(n)


    }


 
    return 0;
}
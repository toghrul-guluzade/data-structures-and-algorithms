#include <stdio.h>



long long gcd(long long a, long long b){
    if(b == 0) return a;
    if(a == 0) return b;

    if(a >= b){
        return gcd(a%b, b);
    } else{
        return gcd(a, b%a);
    }
}


int main(){

    long long a, b;

    scanf("%lld %lld", &a, &b);
    printf("%lld", gcd(a, b));



    return 0;
}
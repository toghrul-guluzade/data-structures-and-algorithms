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

    long long x1, y1;
    long long x2, y2;

    scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);

    long long result = 1 + gcd(x2-x1, y2-y1);

    printf("%lld", result);


    return 0;
}
#include <stdio.h>
#include <math.h>

long long gcd(long long a, long long b){
    a = llabs(a);
    b = llabs(b);
    if(a == 0) return b;
    if(b == 0) return a;

    if(a >= b){
        return gcd(a % b, b);           
    } else{
        return gcd(a, b% a);
    }
}


int main(){


    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);


    long long result = 1 + gcd(d-b, c-a);

    printf("%lld", result);
    return 0;
}

#include <stdio.h>

//(a + b) mod m = ((a mod m) + (b mod m)) mod m


long long  powmod(long long x, long long n, long long m){
    if(n == 0)  return 1;

    if(n % 2 == 0) return powmod((x*x) % m, n/2, m);
    return (x * powmod(x, n-1, m)) % m;

}


int main (){


    long long n, m;

    scanf("%lld %lld", &n, &m);

    long long res = (powmod(1, n, m) + powmod(2, n, m)) % m;

    for(int i = 3; i <= 100; i++){
        res = (res + (i-1) * powmod(i, n, m)) % m;
    }
    
    printf("%lld", res);

    return 0;
}
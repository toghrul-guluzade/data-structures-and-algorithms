#include <stdio.h>


long long  powmod(long long x, long long n, long long m){
    if(n == 0)  return 1;

    if(n % 2 == 0) return powmod((x*x) % m, n/2, m);
    return (x * powmod(x, n-1, m)) % m;

}



int main (){

    long long x, n, m;

    scanf("%lld %lld %lld", &x, &n, &m);

    printf("%lld", powmod(x, n, m));

    return 0; 
}
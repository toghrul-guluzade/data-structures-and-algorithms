#include <stdio.h>

#define MOD 1000000007



long long  powmod(long long x, long long n, long long m){
    if(n == 0)  return 1;

    if(n % 2 == 0) return powmod((x*x) % m, n/2, m);
    return (x * powmod(x, n-1, m)) % m;

}


int main() {
  
  long long n;
  scanf("%lld", &n);

long long res = n * powmod(n-1, n-1, MOD) % MOD;

  printf("%lld", res);
  return 0;
}
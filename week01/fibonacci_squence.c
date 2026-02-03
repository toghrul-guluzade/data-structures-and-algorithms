#include <stdio.h>



long long f(long long n){
  if(n == 0) return 1;
  if(n == 1) return 1;

  return f(n-1) + f(n-2);
}


int main () {

  long long n;

  scanf("%lld", &n);

  printf("%lld", f(n));


  return 0;
}
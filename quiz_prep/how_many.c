#include <stdio.h>



long long f(long long n){
    if(n == 0 | n == 1) return 1;

    return n * f(n-1);

}



long long CnK(long long n, long long k){
    if (k < 0 || k > n) return 0;
    
    long long numerator = f(n);
    long long denominator = f(n-k) * f(k);

    return numerator / denominator;
}
int main(){


    long long n, k;
    scanf("%lld %lld", &n, &k);

    printf("%lld", CnK(n, k));

    return 0;
}
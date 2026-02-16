#include <stdio.h>
#include <math.h>


long long f(long long n){
    if(n == 0 | n == 1) return 1;

    return n * f(n-1);

}


int main(){

    long long n;
    scanf("%lld", &n);

    printf("%lld", f(n));


    return 0;
}
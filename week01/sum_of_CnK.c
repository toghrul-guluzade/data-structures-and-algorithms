#include <stdio.h>

long long f(long long m);

long long CnK(long long m, long long n){

    if(m < 0 || n < 0 || n > m) return 0;
    if(m == 0 || m == n) return 1;

    return (f(2*m) / (f((2*m)-n)* f(n)));

}

long long f(long long m){
    if(m == 0) return 1;
    if(m == 1) return 1;

    return m * f(m-1);

}




int main (){

    long long r;
    scanf("%lld", &r);

    printf("%lld", CnK(r, r));


    return 0;
}
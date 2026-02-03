#include <stdio.h>



long long f(long long pos, long long prev, long long n){

    if(pos > n) return 1;

    long long total = 0;

    if(prev == 0){
        total = total + f(pos + 1, 1, n);
    }

    return total;

}


int main (){

    long long n;
    long long pos = 1;

    scanf("%lld", &n);
    printf("%lld", f(pos, 0, n));


    return 0;
}
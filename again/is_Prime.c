#include <stdio.h>
#include <math.h>


long long prime(long long n){
    if(n < 2) return 0;
    for(long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }   
    return 1;
}

int main(){


    long long n;
 


    while((scanf("%lld", &n)) == 1){
        if(prime(n)){
            printf("Yes");
        } else {
            printf("No");
        }
    }

    return 0;
}
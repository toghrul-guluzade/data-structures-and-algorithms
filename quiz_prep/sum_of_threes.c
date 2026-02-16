#include <stdio.h>


long long cube(long long a, long long m){
    return ((a * a) % m * a) % m;
}


int main(){

    long long a, b, m;

    scanf("%lld %lld %lld", &a, &b, &m);

    long long result = 0;

    for(int i = a; i <= b; i++){
        result = (result + cube(i,m)) % m;
    }
    
    long long ans = 1;
    while(result){ 
        ans *= result % 10;
        result /= 10;
        
    }
    printf("%d", ans);
    return 0;
}
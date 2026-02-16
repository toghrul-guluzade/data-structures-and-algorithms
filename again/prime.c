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


    long long n, m;
    int cnt;
    scanf("%lld %lld", &n, &m);

    for(long long i = n; i <= m; i++){
      if(prime(i)){
        printf("%lld\n", i);
        cnt++;
      } 
    }
    if(cnt == 0){
        printf("Absent");
    }

    return 0;
}
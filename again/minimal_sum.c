#include <stdio.h>
#include <stdlib.h>

long long num[1001];

long long gcd(long long a, long long b){
    a = llabs(a);
    b = llabs(b);
    
    if(b == 0) return a;
    if(a == 0) return b;

    if(a >= b){
        return gcd(a%b, b);
    } else{
        return gcd(a, b%a);
    }
}


long long f(long long a[1001], int cnt){
    
    long long n = a[0];
    long long sub[1001];
    
    long long result = 0;

    for(int i = 1; i<cnt; i++){
        result = gcd(result, a[i] - n);
    }

    return result;
    
}


int main (){

    
    
   while(1){

        int cnt = 0;

        while(cnt < 1001 && scanf("%lld", &num[cnt]) == 1){
            
        
            if(num[cnt] == 0) break;
            cnt++;

    }

      if (cnt == 0) break;
        printf("%lld\n", f(num, cnt));



   } 


    return 0;
}
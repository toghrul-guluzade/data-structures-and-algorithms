#include <stdio.h>




long long gcd(long long a, long long b){
    if(a == 0) return b;
    if(b == 0) return a;
    
    if(a >= b){
        return gcd(a%b, b);
    } else{
        return gcd(a, b%a);
    }
}



int main(){

    int n, cnt;

    scanf("%d", &n);
    int line[100];
    
    while(n){
        
        int result = 0;
        
        scanf("%d", &cnt);

        for (int i = 0; i < cnt; i++) {
            scanf("%d", &line[i]);
        }

        for(int i = 0; i < cnt; i++){
            for(int j = i + 1; j < cnt; j++){
                result += gcd(line[i], line[j]);
            }
        }

        printf("%d\n", result);
        n--;
        
    }

    return 0;
}
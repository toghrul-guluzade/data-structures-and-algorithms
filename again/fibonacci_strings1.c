#include <stdio.h>

long long len[46];

void f(long long n, long long k){

    if(n == 0) {
            return 'a';
    }
    if(n == 1){
           return 'b';
    } 

    if(k <= len[n-2]){
        return f(n-2, k);
    } else {
        return f(n-1, k-len[n-2]);
    }

    
//Check this later

}



int main(){

    int t, n, k;

    scanf("%d %d %d", &t, &n, &k);

     for(int i = t; i <= t; i++){
        f(n);
        printf("%c", memo[k]);
     }

 




    return 0;
}
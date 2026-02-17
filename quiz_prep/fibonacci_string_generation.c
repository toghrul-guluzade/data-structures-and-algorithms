#include <stdio.h>

long long dp[20];


void f(int n){
    if(n == 0){
        printf("a");
        return;
    }
    if(n == 1){
        printf("b");
        return;
    }

    f(n-1);
    f(n-2);

}



int main(){

    int n;
    scanf("%d", &n);

    f(n);

    return 0;
}
#include <stdio.h>
#include <math.h>


int f(int n){
    if(n < 10) return n;

    return n % 10 + f(n/10);
}


int main(){

    int n;
    scanf("%d", &n);
    n = abs(n);

    printf("%d", f(n));

    return 0; 
}
#include <stdio.h>




long long factorial(int n){
    
    if(n == 0){
        return 1;
    } else if (n == 1){
        return 1;
    } else{
        return factorial(n - 1) * n;
    }

    

}

int main(){

    int n;

    scanf("%d", &n);
    printf("%lld", factorial(n));
    

    return 0;
}
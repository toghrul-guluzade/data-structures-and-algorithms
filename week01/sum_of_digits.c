
#include <stdio.h>
#include <stdlib.h>



int sum(int n){

    n= abs(n);

    if(n <10){
        return n;
    } else{
        return sum(n/10) + n%10;
    }
}

int main() {
   
    int n;
    scanf("%d", &n);


    printf("%d", sum(n));

    return 0;
}
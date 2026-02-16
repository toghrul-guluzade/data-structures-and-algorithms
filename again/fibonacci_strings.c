#include <stdio.h>

long long memo[100001];

char f(long long n){

    if(n == 0) {
        printf("%c", 'a');
        return 0;
    }
    if(n == 1){
        printf("%c", 'b');
        return 1;
    } 

    return f(n - 1) + f(n - 2);


}



int main(){

    int n;
    scanf("%d", &n);

    char a = f(n);
 




    return 0;
}
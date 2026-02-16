#include <stdio.h>



int gcd(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;

    if(a >= b){
        return gcd(a%b, b);
    } 
    return gcd(a, b%a);
}



int main(){

    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int numerator = a*d + c*b;
    int denumerator = b*d;
    
    int divider = gcd(numerator, denumerator);

    numerator /= divider;
    denumerator /= divider;

    if(numerator == denumerator){
        printf("%d", 1);
    } else if(denumerator == 1){
        printf("%d", numerator);
    } else{
        printf("%d %d", numerator, denumerator);
    }


    return 0;
}
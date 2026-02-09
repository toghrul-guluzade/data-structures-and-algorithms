#include <stdio.h>

long long gcd(long long a, long long b){
    if(b == 0) return a;
    if(a == 0) return b;

    if(a >= b){
        return gcd(a%b, b);
    } else{
        return gcd(a, b%a);
    }
}






int main(){


    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    a = a*d;
    c = c*b;

    int numerator = a + c;
    int denominator = b*d;

    int reduce = gcd(numerator, denominator);
    
    numerator /= reduce;
    denominator /= reduce;
    
    if(denominator == 1){
        printf("%d", numerator);
    } else {
        
    printf("%d %d", numerator, denominator);
        
    }
    

  return 0;
}
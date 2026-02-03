#include <stdio.h>


/*
Implement the recursive function:

f(n)={ 0,n=0
       f(n−1)+n,n>0
      }
​
 
Input
One integer n (0≤n≤1000).

Output
Print the value of f(n).

Examples
Input #1
5
Answer #1
15
*/

int f(int n){
    if(n==0) return 0;
    return f(n-1) + n;
}


int main(){

    int n;
    scanf("%d", &n);
    printf("%d", f(n));


    return 0;
}
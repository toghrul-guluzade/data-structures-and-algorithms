#include <stdio.h>

#define MOD 1000000007

long long CnK(long long n, long long m){

    if(m == 0) return 1;

    return f(m) / (f(m-n)* f(n));
    



}

long long f(long long m){
    if(m == 0) return 1;
    if(m == 1) return 1;

    return m * f(m-1);

}

long long sum (long long cnk){
    return
}

int main (){




    return 0;
}
#include <iostream>
#include <map>

using namespace std;

map<long long, unsigned long long> m;

long long f(long long n){
    if(n == 0) return 1;

    if(m.count(n)) return m[n];

    m[n] = f(n/2) + f(n/3);
    return m[n];
}

int main(){

    long long n;
    scanf("%lld", &n);

    printf("%llu", f(n));
    return 0;
}
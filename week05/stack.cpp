#include <stdlib.h>
#include <stack>
#include <cstdio>

using namespace std;


int main(){

    stack<int> s;

    for(int i = 1; i <= 10; i++){
        s.push(i*i);
    }

    printf("Top Element: %d\n", s.top());
    printf("Size: %d\n", s.size());
    s.pop();
    printf("Top Element: %d\n", s.top());
    printf("Size: %d\n", s.size());

    return 0;   
}
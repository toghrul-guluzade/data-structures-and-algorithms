#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stack>
#include <vector>


int main(){

    int n;
    std::cin >> n;
    std::vector<int> a(n);
    
    std::stack<int> s;

    for(int i = 0; i < n; i++){
        std::cin >> a[i];

        if(s.empty()){
            s.push(a[i]);
        } else if(s.top() == a[i]){
            s.push(a[i]);
        } else{
            s.pop();
        }
    }

    if(s.empty()){
        std::cout << -1 << "\n";
        return 0;
    } 
    
    int candidate =  s.top();
    int count = 0;

    for(int x : a){
        if(x == candidate) count ++;
    }

    count > n/2 ? std::cout << candidate << "\n" : std::cout << -1 << "\n";

    return 0;
}

#include <iostream>
#include <stack>
#include <stdlib.h>
#include <string.h>
#include <vector>



int main(){
    std::stack<int> s;


    int cnt;
    std::cin >> cnt;

    std::vector<int> a(cnt);

        for(int i=0; i < cnt; i++){
            std::cin >> a[i];
            if(s.empty()){
                s.push(a[i]);
            } else if(s.top() == a[i]){
                s.push(a[i]);
            } else if(s.top() != a[i]){
                s.pop();
            }


        }

    if(s.empty()){
        std::cout << -1;
        return 0;
    }   
    
    int candidate = s.top();
    int count = 0;

    for(int x : a){
        if(x == candidate) count++;
    }

    if(count > cnt/2){
        std::cout << candidate;
    } else{
        std::cout << -1;
    }

    return 0;
}
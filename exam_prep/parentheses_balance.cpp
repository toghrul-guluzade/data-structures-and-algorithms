#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stack>


int main(){

    std::stack<char> s;
    char bracket;

    while((std::cin >> bracket)){
        if(bracket == '('){
            s.push('(');
        } else if(bracket == ')'){
            if(s.empty()){
                std::cout << "NO" << "\n";
                return 0;
            }
            s.pop();
        }
    }

    if(s.size() == 0){
        std::cout << "YES" << "\n";
    } else{
        std::cout << "NO" << "\n";
    }


    return 0;
}
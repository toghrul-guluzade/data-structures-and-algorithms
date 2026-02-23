#include <iostream>
#include <stack>
#include <stdlib.h>
#include <string.h>


int main(){

    std::stack<int> s;

    std::string tok;
    int x, y, res;

    while(std::cin >> tok){
        bool isOp = (tok == "+") || (tok == "-") || (tok == "*") || (tok == "/");

        if(isOp){
            x = s.top();
            s.pop();
            y = s.top();
            s.pop();
            if(tok == "+"){
                res = x + y;
            } else if(tok == "-"){
                res = y - x;
            } else if(tok == "*"){
                res = x * y;
            } else if(tok == "/"){
                res = y / x;
            }

            s.push(res);

        } else{
            s.push(std::stoi(tok));
        }
    }
    std::cout<<s.top();

    return 0;
}
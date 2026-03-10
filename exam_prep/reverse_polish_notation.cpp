#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stack>


int main(){
    std::stack<int> s;
    std::string tok;
    int x, y, res;

    while(std::cin >> tok){
        if(tok == "-" || tok == "+" || tok == "*" || tok == "/"){
            y = s.top();
            s.pop();
            x = s.top();
            s.pop();
            if(tok == "-"){
                res = x - y;
            } else if(tok == "+"){
                res = x + y;
            } else if(tok == "*"){
                res = x * y;
            } else if(tok == "/"){
                res = x / y;
            }

            s.push(res);
        } else{
            s.push(std::stoi(tok));
        }    

    }

    std::cout << s.top() << "\n";

    return 0;
}
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stack>




int main(){

    std::stack<int> s;
    std::string cmd;
    int n;

    while(std::cin>>cmd){
        if(cmd == "push"){
            std::cin >> n;
            s.push(n);
            std::cout << "ok";
            std::cout << '\n';
        } else if(cmd ==  "pop"){
            if(s.empty()){
                std::cout << "error" << "\n";
            } else {
                std::cout << s.top();
                std::cout << '\n';
                s.pop();
            }
        } else if(cmd == "back"){
            if(s.empty()) {
                std::cout << "error" << "\n";
            } else {
                std::cout << s.top();
                std::cout << '\n';
            }
        } else if(cmd == "size"){
            std::cout << s.size();
            std::cout << '\n';
        } else if(cmd == "clear"){
            while(s.size()){
                s.pop();
            }
            std::cout << "ok";
            std::cout << '\n';
        } else if(cmd == "exit"){
            std::cout << "bye";
            return 0;
        }
    }


    return 0;
}
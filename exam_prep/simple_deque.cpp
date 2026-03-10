#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stack>
#include <vector>
#include <deque>


int main(){

    std::string cmd;
    int n;

    std::deque<int> d;

    while(std::cin >> cmd){
        if(cmd == "push_front"){
            std::cin >> n;
            d.push_front(n);
            std::cout << "ok" << "\n";
        } else if(cmd == "push_back"){
            std::cin >> n;
            d.push_back(n);
            std::cout << "ok" << "\n";
        } else if(cmd == "pop_front"){
            if(d.empty()){
                std::cout << "error" << "\n";
            } else{
                std::cout << d.front() << "\n";
                d.pop_front();
            }
        } else if(cmd == "pop_back"){
            if(d.empty()){
                std::cout << "error" << "\n";
            } else{
                std::cout << d.back() << "\n";
                d.pop_back();
            }
        } else if(cmd == "front"){
            if(d.empty()){
                std::cout << "error" << "\n";
            } else{
                std::cout << d.front() << "\n";
            } 
        } else if(cmd == "back"){
            if(d.empty()){
                std::cout << "error" << "\n";
            } else{
                std::cout << d.back() << "\n";
            }
        } else if(cmd == "size"){
            std::cout << d.size() << "\n";
        } else if(cmd == "clear"){
            d.clear();
            std::cout << "ok" << "\n";
        } else if(cmd == "exit"){
            std::cout << "bye" << "\n";
            return 0;
        }
    }



    return 0;
}
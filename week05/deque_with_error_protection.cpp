#include <iostream>
#include <stack>
#include <stdlib.h>
#include <string.h>
#include <deque>

int main(){

    std::deque<int> q;

    std::string cmd;
    int n;
    while(std::cin >> cmd){
        if(cmd == "push_front"){
            std::cin >> n;
            q.push_front(n);
            std::cout << "ok\n";
        } else if(cmd == "push_back"){
            std::cin >> n;
            q.push_back(n);
            std::cout << "ok\n";
        } else if(cmd == "pop_front"){
            if(q.size() != 0){
                n = q.front();
                q.pop_front();
            } else{
                std::cout << "error\n";
                continue;
            }
            std::cout << n << '\n';
        } else if(cmd == "pop_back"){
            if(q.size() != 0){
                n = q.back();
                q.pop_back();
            } else {
                std::cout << "error\n";
                continue;
            }
            std::cout << n << '\n';
        } else if(cmd == "front"){
            if(q.size() != 0){
                std::cout << q.front() << '\n';
            } else {
                std::cout << "error\n";
                continue;
            }
        } else if(cmd == "back"){
            if(q.size() != 0){
                std::cout << q.back() << '\n';
            } else{
                std::cout << "error\n";
                continue;
            }
        } else if(cmd == "size"){
            std::cout << q.size() << '\n';
        } else if(cmd == "clear"){
            q.clear();
            std::cout << "ok" << '\n';
        } else if(cmd == "exit"){
            std::cout << "bye\n";
            return 0;
        }
    }

    return 0;
}
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
            std::cin>>n;
            s.push(n);
            std::cout<<"ok"<<"\n";
        } else if(cmd == "pop"){
            if(s.size() != 0){
                std::cout<<s.top()<<"\n";
                s.pop();
            } else{
                std::cout<<"error"<<"\n";
            }
        } else if(cmd == "back"){
            std::cout<<s.top()<<"\n";
        } else if(cmd == "size"){
            std::cout<<s.size()<<"\n";
        } else if(cmd == "clear"){
            if(s.size() != 0){
                while(s.size()){
                    s.pop();
                }
                std::cout<<"ok"<<"\n";
            } else {
                std::cout<<"error"<<"\n";
            }
        } else if(cmd == "exit"){
            while(s.size()){
                s.pop();
            }
            std::cout<<"bye";
            return 0;
        }

    }

    return 0;
}
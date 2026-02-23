#include <iostream>
#include <stack>
#include <stdlib.h>
#include <string.h>


int main(){

    int open;
    char c;

    int cnt;

    std::cin>>cnt;
    std::cin.ignore(1000000, '\n');

    while(cnt){
        std::string line;
        std::getline(std::cin, line);

        std::stack<char> s;
        bool ok = true;

        for(char c : line){
            if(c == '(' || c == '['){
                s.push(c);
            } else {
                if(s.empty()){ok = false; break;}
                 if(((s.top() == '(') && (c == ')')) || (s.top() == '[' && (c == ']'))){
                    s.pop();
                 } else{
                    ok = false;
                    break;
                 }
               
            }
        }
        if(!s.empty()) ok = false;

        std::cout<<(ok ? "Yes\n" : "No\n");
        cnt--;
    }

    return 0;
}
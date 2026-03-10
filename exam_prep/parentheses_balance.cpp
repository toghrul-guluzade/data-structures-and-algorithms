#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stack>


int main(){


    char bracket;

    int cnt; 
    std::cin >> cnt;
    std::cin.ignore(1000, '\n');

    
    while(cnt){

        std::stack<char> s;
        std::string line;
        std::getline(std::cin, line);

        bool status = true;

        for(char c : line){
            if(c == '(' || c == '['){
                s.push(c);
            } else if (c == ')'){
                if(s.empty() || s.top() != '('){
                    status = false;
                    break;
                }
                s.pop();
            } else if(c == ']'){
                if(s.empty() || s.top() != '['){
                  status = false;
                  break;
                } 
                s.pop();
            }
        }


        if(s.size() == 0 && status){
            std::cout << "Yes" << "\n";
        } else{
            std::cout << "No" << "\n";
        }

        cnt--;
    }


    return 0;
}
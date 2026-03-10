#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stack>


int main(){

    int size;
    std::stack<int> s;
    int cmd, n;

    std::cin >> size;

    while(size){
        std::cin >> cmd;
        if(cmd == 1){
            std::cin >> n;
            s.push(n);
        } else if(cmd == 2){
            std::cout << s.top() << "\n";
            s.pop();
        }

        size--;

    }


    return 0;
}
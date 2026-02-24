#include <iostream>
#include <stack>
#include <stdlib.h>
#include <string.h>
#include <deque>


int main(){

    int cnt;
    std::cin >> cnt;
    std::deque<int> book;
    int cmd, number;

    while(cnt--){
        std::cin >> cmd;
        if(cmd == 1){
            std::cin >> number;
            book.push_front(number);
        } else if(cmd == 2){
            std::cin >> number;
            book.push_back(number);
        } else if(cmd == 3){
            std::cout << book.front() << '\n';
            book.pop_front();
        } else if(cmd == 4){
            std::cout << book.back() << '\n';
            book.pop_back();
        }
    }


    return 0;
}
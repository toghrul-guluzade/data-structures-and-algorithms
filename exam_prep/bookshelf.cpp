#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stack>
#include <vector>
#include <deque>


int main(){

    int cnt;
    std::cin >> cnt;
    std::deque<int>d;
    int cmd, n;

    while(cnt){
        std::cin >> cmd;

        if(cmd == 1){
            std::cin >> n;
            d.push_front(n);
        } else if (cmd == 2){
            std::cin >> n;
            d.push_back(n);
        } else if(cmd == 3){
            std::cout << d.front() << "\n";
            d.pop_front();
        } else if(cmd == 4){
            std::cout << d.back() << "\n";
            d.pop_back();
        }

        cnt--;
    }


    return 0;
}
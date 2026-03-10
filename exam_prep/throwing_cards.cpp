#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stack>
#include <vector>
#include <deque>


int main(){

    int cnt, n;
    std::deque<int> cards;
    std::vector<int> v;

    while(std::cin >> cnt){
        for(int i = 0; i < cnt; i++){
            if(cards.size() < 2){
                cards.push_back(i);
            } else{
                v.push_back(i);
                cards.pop_back();
                n = cards.back();
                cards.pop_back();
                cards.push_front(n);
            }
        }
    }

    std::cout << "Discarded Cards: ";
    for(int x : v){
        if(x) std::cout << ", ";
        std::cout << x;
    }
    std::cout << "\n";
    std::cout << "Remaining Card: ";
    std::cout << cards.back();
    return 0;
}
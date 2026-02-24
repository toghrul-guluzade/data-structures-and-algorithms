#include <iostream>
#include <stack>
#include <stdlib.h>
#include <string.h>
#include <deque>
#include <vector>

int main(){

    int n;  
    std::deque<int> cards;
    std::vector<int> d;

    int top;

  

    while (std::cin >> n && n != 0){
        cards.clear();
        d.clear();

       for (int i = 1; i <= n; i++) cards.push_back(i);

        while(cards.size() >= 2){
            d.push_back(cards.front());
            cards.pop_front();
            top = cards.front();
            cards.pop_front();
            cards.push_back(top);
            
        }


        std::cout << "Discarded cards:";
        if(!d.empty()){
            std::cout << " ";
            for(int i = 0; i < d.size(); i++){
            if(i) std::cout << ", ";
            std::cout << d[i];
            }
        }
    

        std::cout << "\nRemaining card: " << cards.front() << '\n';


    }
    



    return 0;
}
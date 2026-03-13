#include <iostream>
#include <vector>
#include <algorithm>


int main(){

    std::vector<int> v;
    int n, m;
    
    std::cin >> n;

    for(int i = 0; i < n; i++){

        std::cin >> m;
        v.push_back(m);
    }

    
    std::sort(v.begin(), v.end(), std::greater<int>());
    
    for(int i = 0; i < n; i++){
        std::cout << v.at(i);
        std::cout << " ";
    }



    return 0;
}
#include <iostream>
#include <stack>
#include <stdlib.h>
#include <string.h>



int main(){

    std::stack<int> s;

    int size, cmd, n;

    std::cin>>size;

    while(size){
        
        std::cin>>cmd;
        if(cmd == 1){
            std::cin>>n;
            s.push(n);
        } else{
            std::cout<<s.top()<<"\n";
            s.pop();
        }
        size --;
    }




    return 0;
}
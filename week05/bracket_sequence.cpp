#include <iostream>
#include <stack>
#include <stdlib.h>
#include <string.h>


int main(){

    int open = 0;

    char c;

    while(std::cin>>c){
        if(c == '('){
            open++;
        } else{
            if(open != 0){
                open--;
            } else{
                std::cout<<"NO";
                return 0;
            }
        }
    }

    std::cout<<(open == 0 ? "YES" : "NO");

    return 0;
}
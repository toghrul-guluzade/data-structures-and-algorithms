#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int n, x;
    std::cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        std::cin >> x;
        arr[i] = x;
    }


    for(int i = n; i > 0; i--){
        for(int j = i - 1; j > n; j--){
            if(arr[j] < arr[i]){
                std::swap(arr[i], arr[j]);
            }
        }
    }

    for(int i = n - 1; i >= 0; i--){
        std::cout << arr[i] << " ";
    }

    return 0;
}
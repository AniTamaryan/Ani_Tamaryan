#include <iostream>

int main() {
    int size = 0;

    while( size <= 0){
        std::cout << "Enter the limit for Fibonacci numbers (positive integer): ";
        std::cin >> size;
    }
    
    int arr[size];

    arr[0] = 1;
    arr[1] = 1;
    for(int i = 2; i < size; ++i) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    for(int i = 1; i <= size; ++i) {
        for(int j = 0; j < i; ++j){
            std::cout << arr[j];
        }
        std::cout << std::endl;
    }

    return 0;
}

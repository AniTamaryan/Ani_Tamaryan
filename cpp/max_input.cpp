#include <iostream>

int main() {
    int num = 0;
    int count = 10;
    int max;
    
    std::cout << "Enter the first number: ";
    std::cin >> max;

    for(int i = 1; i < count; i++){
        std::cout << "Enter number " << i + 1 << ": ";  
        std::cin >> num;
        if(num > max) {
            max = num;
        }
    }

    std::cout << "Maximum number entered: " << max << std::endl;

    return 0;
}

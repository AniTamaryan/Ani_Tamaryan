#include <iostream>

int main() {

    int num = 0;
    int fact = 1;
    std::cout << "Enter the number: ";
    std::cin >> num;
 
    if( num < 0 ) {
        std::cout << "The number must be positive or zero: " << std::endl;
    } else {
        for(int i = 1; i <= num; ++i) {
            fact *= i;
        }
        std::cout << "The factorial is: " << fact << std::endl;
    }

    return 0;
    
}

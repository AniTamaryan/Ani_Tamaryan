#include <iostream>

int main() {
    int num = 0;
    std::cout << "Enter the number: ";
    std::cin >> num;

    if (num % 2 == 0) {
        std::cout << "This number is even: " << std::endl;
    } else {
        std::cout << "This number is odd" << std::endl;
    }

    return 0;

}

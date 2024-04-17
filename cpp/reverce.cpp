#include <iostream>

int main() {

    int num = 0;
    int reminder = 0;
    int reverse = 0;
    std::cout << "Enter the number: ";
    std::cin >> num;

    while (num != 0) {
        reminder = num % 10;
        reverse = reverse * 10 + reminder;
        num /= 10;
    }
    std::cout << "The reverse number is: " << reverse << std::endl;
    return 0;

}

#include <iostream>

int main() {

    int num = 0;
    int reminder = 0;
    int reverse = 0;
    std::cout << "Enter the number: ";
    std::cin >> num;
    int original_num = num;

    while (num != 0) {
        reminder = num % 10;
        reverse = reverse * 10 + reminder;
        num /= 10;
    }
    
    if(reverse == original_num){
        std::cout << "The number is palindrome: " << std::endl;
    } else {
        std::cout << "The number isn`t palindrome: " << std::endl;
    }
    return 0;

}

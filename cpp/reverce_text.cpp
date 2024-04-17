#include <iostream>

void ReverseText(char arr[], int size) {
    char temp = arr[0];
    for (int i = 0, j = size - 1; i < j; ++i, --j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    std::cout << "The reversed text is: " << arr << std::endl;
}

int main() {
    int size = 0;
    std::cout << "Enter the size of the text: ";
    std::cin >> size;

    while (size <= 0)
    {
        std::cout << "Enter the size of the text: ";
        std::cin >> size; 
    }
    

    char arr[size + 1];
    std::cout << "Enter the text to reverse: ";
    std::cin >> arr;

    ReverseText(arr, size);

    return 0;
}

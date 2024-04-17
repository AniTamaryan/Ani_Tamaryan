#include <iostream>

#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)


int main() {
    int size = 0;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];

    std::cout << "Enter the elements of the array: ";
    std::cin >> arr[0];
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < size; ++i) {
        std::cin >> arr[i];
        max = MAX(max, arr[i]);
        min = MIN(min, arr[i]);
    }

    std::cout << "THe max of the array is: " << max << std::endl; 
    std::cout << "The min of the array is: " << min << std::endl;
        

    return 0;
}


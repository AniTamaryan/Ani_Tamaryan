#include <iostream>

void GetArray (int arr[], int size) {
    std::cout << "Enter the elements of the array : ";
    for( int i = 0; i < size ; ++i){
        std::cin >> arr[i];
    }
}

void FindPairSum (int arr[], int size, int target) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size ; j++) {
            if ( arr[i] + arr[j] == target) {
                std::cout << "(" << arr[i] << "," << arr[j] << ")\n";
                found = true; 
            }   
        }  
    }
     if (!found) {
            std::cout << "No pairs found: ";
        }
}

int main() {

    int size = 0;
    std::cout << "Enter the size of the array: ";
    
    while (size <= 0)
    {
        std::cout << "Enter the size of the text: ";
        std::cin >> size; 
    }
    
    int arr[size];
    GetArray(arr, size);
    
    int target = 0;
    std::cout << "Enter the target: ";
    std::cin >> target;

    FindPairSum(arr, size, target);
     
    return 0;
    
}

#include <iostream>


void GetArray (int arr[], int size) {
    
    std::cout << "Enter the elements of the array : ";
    for( int i = 0; i < size ; ++i){
        std::cin >> arr[i];
    }
}

void SortArray ( int arr[], int size) {
    for ( int i = 1; i < size; ++i) {
        int temp = arr[i];
        int j = i - 1;

        while ( j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

void PrintArray (int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


int main() {

    int size = 0;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    int arr[size];

    GetArray(arr, size);
    std::cout << "The array is: ";
    PrintArray(arr, size);


    SortArray(arr, size);
    std::cout<<"The array after sorting: ";
    PrintArray(arr, size);

    return 0;
}

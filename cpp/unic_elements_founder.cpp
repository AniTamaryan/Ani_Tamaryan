#include <iostream>

const int max_size = 100; // The maxx size of te array

void printMatrix(int arr[max_size][max_size], int rows, int cols) {
    std::cout << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void getMatrix(int arr[max_size][max_size], int rows, int cols) {
    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> arr[i][j];
        }
    }
}

int inputPositiveInteger() {
    int num = 0;
    std::cin >> num;
    
    while (std::cin.fail() || num <= 0){
        std::cout << "Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore(max_size * max_size, '\n'); // Adjusted to match the array size
        std::cin >> num;
    }

    return num;
}

void unicElmentsFounder(int arr[max_size][max_size], int rows, int cols) {
    std::cout << "Unique elements in the matrix:" << std::endl;
    int current = arr[0][0];
    bool isUnique = true;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            current = arr[i][j];
            isUnique = true;

            for(int k = 0; k < rows; ++k){
                for(int l = 0; l < cols; ++l){
                   if ((k != i || l != j) && arr[k][l] == current) {
                        isUnique = false;
                        break;
                    }
                }
                if (!isUnique){     
                    break;
                }
            }
            if (isUnique) {
                std::cout << current << ", ";
            }
        }
    }
}

int main() {
    std::cout << "Enter the number of rows for matrix: ";
    int rows = inputPositiveInteger();
    std::cout << "Enter the number of columns for matrix: ";
    int cols = inputPositiveInteger();

    int arr[max_size][max_size];
    getMatrix(arr, rows, cols);
    std::cout << "The matrix is: ";
    printMatrix(arr, rows, cols);

    unicElmentsFounder(arr, rows, cols);

    return 0;
}

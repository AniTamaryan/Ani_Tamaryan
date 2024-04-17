#include <iostream>
#define max_size 100

void printSpiralMatrix(int arr[][max_size], int rows, int cols, int start_row, int start_col) {
    if (rows <= 0 || cols <= 0)
        return;

    for(int j = start_col; j < start_col + cols; j++){
        std::cout << arr[start_row][j] << " ";
    }
    for(int i = start_row + 1; i < start_row + rows; i++){
        std::cout << arr[i][start_col + cols - 1] << " ";
    }
    if (rows > 1) {
        for(int j = start_col + cols - 2; j >= start_col; j--){
            std::cout << arr[start_row + rows - 1][j] << " ";
        }
    }
    if (cols > 1) {
        for(int i = start_row + rows - 2; i > start_row; i--) {  
            std::cout << arr[i][start_col] << " ";
        }
    }

    printSpiralMatrix(arr, rows - 2, cols - 2, start_row + 1, start_col + 1);
}

void getMatrix(int arr[][max_size], int rows, int cols) {
    std::cout << "Enter the elements of the matrix: ";
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
        std::cin.ignore(100, '\n');
        std::cin >> num;
    }

    return num;
}

void printMatrix(int arr[][max_size], int rows, int cols) {
    std::cout << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int arr[max_size][max_size];
    std::cout << "Enter the number of rows: ";
    int rows = inputPositiveInteger();
    std::cout << "Enter the number of cols: ";
    int cols = inputPositiveInteger(); 
    getMatrix(arr, rows, cols);
    printMatrix(arr, rows, cols);
    printSpiralMatrix(arr, rows, cols, 0, 0);

    return 0;
}

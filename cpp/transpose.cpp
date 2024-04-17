#include <iostream>
#define max_size 100

// Function to print the matrix
void printMatrix(int arr[][100], int rows, int cols) {
    std::cout << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void transposeMatrix(int arr[][max_size], int rows, int cols) {
    if(rows == cols){
        int temp = 0;
        for (int i = 0; i < rows; ++i) {
            for (int j = i + 1; j < cols; ++j) {       
                temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }    
        }
        std::cout << "The transposed matrix is: ";
        printMatrix(arr, rows, cols);

    }else {
        int transposed[max_size][max_size];
        for (int i = 0; i < cols; ++i) {
            for (int j = 0; j < rows; ++j) {
                transposed[i][j] = arr[j][i];
            }
        }
        std::cout << "The transposed matrix is: ";
        printMatrix(transposed, cols, rows);
    }
}

//Function to get elements of the array
void getMatrix(int arr[][100], int rows, int cols) {
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

int main() {
    std::cout << "Enter the number of rows: ";
    int rows = inputPositiveInteger();
    std::cout << "Enter the number of column: ";
    int cols = inputPositiveInteger();

    int arr[max_size][max_size];

    getMatrix(arr, rows, cols);
    std::cout << "The matrix is: ";
    printMatrix(arr, rows, cols);

    transposeMatrix(arr, rows, cols);  
    

    return 0;
}

#include <iostream>


int main()
{
    float num1;
    float num2;

    std::cout << "Enter the first number: " ;
    std::cin >> num1;
    std::cout <<"Enter the second number: ";
    std::cin >> num2;

    char sign;
    std::cout << "Enter the sign: ";
    std::cin >> sign;

    float res;

    switch (sign)
    {
    case  '+':
        res = num1 + num2; 
        break;
    case '-':
        res = num1 - num2;
        break; 
    case '*':
        res = num1 * num2;
        break;
    case '/':  
        if(num2 != 0){
            res = num1 / num2;
        }else{
            std::cout << "The number can`t be divided by zero!: " << std::endl;
            return 1;
        }
        break;
    default:
        std::cout << "Invalid sign: " << std::endl;
        return 1;
    }

    std::cout << "num1" << " " << sign << " " << "num2 = " << res ;
    std::cout << std::endl;

    return 0;
}

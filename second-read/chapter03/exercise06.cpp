#include "../../std_lib_facilities.h"

int main() {
    int num1, num2, num3;
    std::cout << "Please enter three unique integers: " << std::endl;
    std::cin >> num1 >> num2 >> num3;

    if (num1 < num2 && num1 < num3) {
        if (num2 < num3) {
            std::cout << num1 << ", " << num2 << ", " << num3 << std::endl;
        } else {
            std::cout << num1 << ", " << num3 << ", " << num2 << std::endl;
        }
    } else if (num2 < num1 && num2 < num3) {
        if (num1 < num3) {
            std::cout << num2 << ", " << num1 << ", " << num3 << std::endl;
        } else {
            std::cout << num2 << ", " << num3 << ", " << num1 << std::endl;
        }
    } else if (num3 < num1 && num3 < num2) {
        if (num1 < num2) { 
            std::cout << num3 << ", " << num1 << ", " << num2 << std::endl;
        } else {
            std::cout << num3 << ", " << num2 << ", " << num1 << std::endl;
        }
    }
}
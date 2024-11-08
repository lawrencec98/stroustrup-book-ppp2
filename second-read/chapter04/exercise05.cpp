#include "../../std_lib_facilities.h"

int main() {
    std::cout << "Please enter three arguments: two double values and a character to represent an operaton." << std::endl;
    double operand1, operand2;
    char op;
    std::cin >> operand1 >> operand2 >> op;

    switch(op) {
        case '+':
            std::cout << operand1 << " + " << operand2 << " = " << operand1+operand2 << std::endl;
            break;
        case '-':
            std::cout << operand1 << " - " << operand2 << " = " << operand1-operand2 << std::endl;
            break;
        case '*':
            std::cout << operand1 << " * " << operand2 << " = " << operand1*operand2 << std::endl;
            break;
        case '/':
            std::cout << operand1 << " / " << operand2 << " = " << operand1/operand2 << std::endl;
            break;
        default:
            std::cout << "Error: unknown operator." << std::endl;
            break;
    }
}
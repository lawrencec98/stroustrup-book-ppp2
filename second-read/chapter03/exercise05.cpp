#include "../../std_lib_facilities.h"

int main() {
    double val1, val2;
    std::cout << "Please enter two floating point values: " << std::endl;
    std::cin >> val1 >> val2;

    // print smaller
    if (val1 < val2) {
        std::cout << val1 << " is smaller than " << val2 << std::endl;
    }
    else if (val2 < val1) {
        std::cout << val2 << " is smaller than " << val1 << std::endl;
    } else {
        std::cout << val1 << " is equal to " << val2 << std::endl;
    }


    // print sum
    std::cout << val1 << " + " << val2 << " = " << val1 + val2 << std::endl;

    // print difference
    std::cout << val1 << " - " << val2 << " = " << val1 - val2 << std::endl;

    // print product
    std::cout << val1 << " * " << val2 << " = " << val1 * val2 << std::endl;

    // print ratio
    std::cout << val1 << " / " << val2 << " = " << val1 / val2 << std::endl;
}
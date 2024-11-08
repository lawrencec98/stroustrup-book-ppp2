#include "../../std_lib_facilities.h"

double ctok(double c) {
    if (c < -273.15) {
        throw std::logic_error("Error! c cannot be below -273.15 C");
    } else {
        double k = c + 273.15;
        return k;
    }
}

int main() {
    try {
        double c = 0;
        std::cout << "Please enter a temperature in degrees C: " << std::endl;
        std::cin >> c;
        double k = ctok(c);
        std::cout << c << "C == " << k << " Kelvins" << std::endl;
    }
    catch(std::logic_error& e) {
        std::cout << "Sorry you've entered an invalid temperature!" << std::endl;
    }
}
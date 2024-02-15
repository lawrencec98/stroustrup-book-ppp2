/*
    Write a program that prompts the user to enter three integer values, and then outputs the values in
    numerical sequence separated by commas. So, if the user enters the values 10 4 6, the output should be
    4, 6, 10. If two values are the same, they should just be ordered together. So, the input 4 5 4 should
    give 4, 4, 5.
*/

#include <iostream>


int main() {

    int val1 = 0;
    int val2 = 0;
    int val3 = 0;

    std::cout << "Please enter three integers: ";
    std::cin >> val1 >> val2 >> val3;
    std::cout << "val1 = " << val1 << std::endl;
    std::cout << "val2 = " << val2 << std::endl;
    std::cout << "val3 = " << val3 << std::endl;

    int first;
    int second;
    int third;

    if (val1 <= val2 && val1 <= val3) {
        if (val2 <= val3) {
            first = val1;
            second = val2;
            third = val3;
        }
        else {
            first = val1;
            second = val3;
            third = val2;
        }
    }
    else if (val2 <= val3) {
        if (val1 <= val3) {
            first = val2;
            second = val1;
            third = val3;
        }
        else {
            first = val2;
            second = val3;
            third = val1;
        }
    }
    else if (val2 <= val1) {
        first = val3;
        second = val2;
        third = val1;
    }
    else {
        first = val3;
        second = val1;
        third = val2;
    }

    std::cout << "The sorted integers are: " << first << ", " << second << ", " << third << std::endl;
}
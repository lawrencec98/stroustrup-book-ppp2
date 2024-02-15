/*
    Write a program in C++ that converts from miles to kilometers. Your program should have a reasonable
    prompt for the user to enter a number of miles. Hint: There are 1.609 kilometers to the mile.
*/

#include <iostream>


int main() {

    double distance_miles = 0;
    std::cout << "Enter distance (miles) to convert to (kilometers): ";
    std::cin >> distance_miles;
    std::cout << distance_miles << " miles is equivalent to: " << distance_miles*1.609 << " kilometers.\n";
}
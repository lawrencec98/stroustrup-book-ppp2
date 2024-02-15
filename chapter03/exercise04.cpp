/*
    Write a program that prompts the user to enter two integer values. Store these values in int variables
    named val1 and val2. Write your program to determine the smaller, larger, sum, difference, product, and
    ratio of these values and report them to the user.
*/

#include <iostream>


int main() {
    
    int val1 = 0;
    int val2 = 0;

    std::cout << "Please enter two integers val1 and val2: ";
    std::cin >> val1 >> val2;
    
    int smaller = 0;
    int larger = 0;
    int sum = val1 + val2;
    int difference = val1 - val2;
    int product = val1 * val2;
    double ratio = (double)val1 / (double)val2;

    if (val1 < val2) smaller = val1; larger = val2;
    if (val1 > val2) smaller = val2; larger = val1;
    
    std::cout << "val1 = " << val1 << std::endl;
    std::cout << "val2 = " << val2 << std::endl;
    std::cout << "\t smaller: " << smaller << std::endl;
    std::cout << "\t larger: " << larger << std::endl;
    std::cout << "\t sum: " << sum << std::endl;
    std::cout << "\t difference: " << difference << std::endl;
    std::cout << "\t product: " << product << std::endl;
    std::cout << "\t ratio: " << ratio << std::endl;
}
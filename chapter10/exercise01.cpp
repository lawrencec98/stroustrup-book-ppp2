/*
    Write a program that produces the sum of all the numbers in a file of whitespace-separated integers.
*/

#include "../std_lib_facilities.h"
#define filename "input_exercise01.txt"

int main() {
    int sum = 0;

    ifstream ist {filename};
    if(!ist) error("ERROR: could not open input file.\n");

    while (true) {
        int number;
        ist >> number;
        sum += number;
        if (ist.eof()) break;
    }

    cout << "your sum is: " << sum << '\n';

    return 0;
}
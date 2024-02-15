/*
    Modify your drill01.cpp as follows change the prompt to enter "Enter the name of the person
    you want to write to" and change the output to "Dear first_name, ". Don't forget the comma.
*/

#include <iostream>
#include <string>


int main() {

    std::string first_name = "";
    std::cout << "Enter the name of the person you want to write to: ";
    std::cin >> first_name;
    std::cout << "Dear " << first_name << ",\n";
}
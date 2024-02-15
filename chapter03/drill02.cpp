/*
    Add an introductory line or two, like "How are you? I am fine. I miss you." Be sure to indent the first line.
    Add a few more lines of your choosing - it's your letter.
*/

#include <iostream>
#include <string>


int main() {

    std::string first_name = "";
    std::cout << "Enter the name of the person you want to write to: ";
    std::cin >> first_name;
    std::cout << "Dear " << first_name << ",\n";

    std::cout << "\t How are you? I am fine. I miss you.\n";
}
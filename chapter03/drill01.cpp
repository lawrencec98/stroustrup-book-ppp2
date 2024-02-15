/*
    This drill is to write a program that produces a simple form letter based on user input. Begin by typing code from
    Section 3.1 prompting a user to enter hi or her first name and writing "Hello, first_name" where first_name is the
    name entered by the user. Then modify your code as follows change the prompt to enter "Enter the name of the person
    you want to write to" and change the output to "Dear first_name, ". Don't forget the comma.
*/

#include <iostream>
#include <string>


int main() {

    std::string first_name = "";
    std::cout << "Please enter a name: ";
    std::cin >> first_name;
    std::cout << "Hello, " << first_name << std::endl;
}
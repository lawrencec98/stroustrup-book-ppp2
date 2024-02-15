/*
    Declare a char variable called friend_sex and initialize its value to 0. Prompt the user to enter an m if the 
    friend is male, and an f if the friend is female. Assign the value entered to the variable friend_sex.
    Then use two if-statements to write the following:

        If the friend is male, write "If you see friend_name please ask him to call me."
        If the friend is female, write "If you see friend_name please ask her to call me."
*/

#include <iostream>
#include <string>


int main() {

    //variables
    std::string first_name = "";
    std::string friend_name = "";
    char friend_sex = '0';

    //ask for recipient
    std::cout << "Enter the name of the person you want to write to: ";
    std::cin >> first_name;
    std::cout << "Dear " << first_name << ",\n";
    std::cout << "\t How are you? I am fine. I miss you.\n";

    //ask for friend
    std::cout << "Enter the name of a friend: ";
    std::cin >> friend_name;
    std::cout << "\t Have you seen " << friend_name << " lately?\n";

    //ask for sex of friend
    std::cout << "Enter " << friend_name << "'s sex (m==male, f==female): ";
    std::cin >> friend_sex;

    if (friend_sex == 'm') {
        std::cout << "\t If you see " << friend_name << ", please tell them to call me.\n";
    }
    else if (friend_sex == 'f') {
        std::cout << "\t If you see " << friend_name << ", please tell them to call me.\n";
    }
}
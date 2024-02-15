/*
    Now prompt the user for the name of another friend, and store it in friend_name. Add a line to your letter:
    "Have you seen friend_name lately?"
*/

#include <iostream>
#include <string>


int main() {

    std::string first_name = "";
    std::string friend_name = "";
    std::cout << "Enter the name of the person you want to write to: ";
    std::cin >> first_name;
    std::cout << "Dear " << first_name << ",\n";

    std::cout << "\t How are you? I am fine. I miss you.\n";
    std::cout << "Enter the name of a friend: ";
    std::cin >> friend_name;
    std::cout << "\tHave you seen " << friend_name << " lately?\n";
}
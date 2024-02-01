/*
    Modify cat_dot() from the previous exercise to take a string to be used as the separator (rather than dot) as its third argument.
*/

#include <string>
#include <iostream>

using std::string;

string cat_dot(const string& s1, const string& s2, const string& s3) {

    string new_string = s1 + s3 + s2;
    return new_string;
}


int main() {

    string s1, s2, s3;
    std::cout << "Please enter three string values: ";
    std::cin >> s1 >> s2 >> s3;

    string s4_concat = cat_dot(s1, s2, s3);
    std::cout << "Result: " << s4_concat << '\n';
}
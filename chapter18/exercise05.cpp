/*
    Write a function, string cat_dot(const string& s1, const string& s2), that concatenates two strings with a dot in between. For example:
    cat_dot("Niels", "Bohr") will return a string containing Niels.Bohr.
*/

#include "../std_lib_facilities.h"


string cat_dot(const string& s1, const string& s2) {
    
    string new_string = s1 + '.' + s2;
    return new_string;
}


int main() {

    string s1 = "Niels";
    string s2 = "Bohr";
    string s3 = cat_dot(s1,s2);

    cout << "s3 is: " << s3 << endl;
}
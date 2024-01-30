/*
    Write a function, void to_lower(char *s), that replaces all uppercase characters in the C-style string s with their lowercase equivalents. For example,
    "Hello, World!" becomes "hello, world!". Do not use any standard library functions. A C-style string is a zero-terminated array of characters, so if you find
    a char with the value 0 you are at the end.
*/

#include "../std_lib_facilities.h"


void to_lower(char *s) {
    
    int i = 0;

    while(s[i] != '0') {
        if(s[i] >= 65 && s[i] <= 90) {
            s[i] = s[i] + 32;
        }
        i++;
    }
}


int main() {

    char *string = new char[14] {'H','e','l','l','o',',',' ','W','o','r','l','d','!','0'};
    cout << "string before: ";
    for(int i = 0; i < 14; i++) {
        if(string[i] == '0') break;
        cout << string[i];
    }
    cout << endl;    

    to_lower(string);
    
    //print out new string
    cout << "string after: ";
    for(int i = 0; i < 14; i++) {
        if(string[i] == '0') break;
        cout << string[i];
    }
    cout << endl;
}
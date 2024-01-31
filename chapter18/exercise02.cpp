/*
    Write a function, char* findx(const char* s, const char* x), that finds the first occurence of the C-style string x in s. Do not use any standard library functions.
    Do not use subscripting; use the dereference operator * instead.
*/

#include "../std_lib_facilities.h"


char* findx(const char* s, const char* x) {

/*
    1. compare first char in x with s iteratively.
    2. when we get a match, iterate over s and x simultaneously.
    3. if at some point chars do not match, return false.
    4. if all chars in x get matched, return pointer(?) to initial position in s.
*/

    if (x==0 || !*x) return const_cast<char*>(s);
    if (s==0 || !*s) return 0;

    for(int i = 0; *(s + i); i++) {
        if(*(s + i) == *x) {
            for(int j = 0; *(x + j); j++) {
                if(!*(s + i + j)) return const_cast<char*>(s);
                if(!*(x + j) == *(s + i + j)) break;
                if(!*(x + j + 1)) return const_cast<char*>(s + i);
            }
        }
    }

    return 0;
}


int main() {

    char s[] {"I bet you wont find Waldo!"};
    char x[] {"bet"};
    char* substring = findx(s, x);

    while(*substring) {
        cout << *substring;
        ++substring;
    }
    cout << endl;
}
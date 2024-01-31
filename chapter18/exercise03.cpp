/*
    Write a function, int strcmp(const char* s1, const char* s2), that compares C-style strings. Let it return a negative number if s1 is lexicographically before 2;
    zero if s1 equals s2; and a positive number if s1 is lexicographically after s2. Do not use any standard library functions. Do not use subscripting; use the
    dereference operator * instead.
*/

#include "../std_lib_facilities.h"


int strcmp(const char* s1, const char* s2) {

    if (*s1 == 0 || !*s1) return 1;
    if (*s2 == 0 || !*s2) return -1;

    for(int i = 0; *(s1 + i); i++) {
        if(*(s1 + i) < *(s2 + i)) {
            return -1;
        }
        else if(*(s1 + i) > *(s2 + i)) {
            return 1;
        }
        else if(!*(s2 + i)) {                                   //reached the end of s2, s2 lexicographically before s1.
            return 1;
        }
        else if(!*(s1 + i + 1) && *(s2 + i + 1)) {              //reached the end of s1, s1 is lexicographically before s2.
            return -1;
        }
    }
    return 0;
}


int main() {

    const char s1[] {"Foobar"};
    const char s2[] {"Foobar"};
    int result = strcmp(s1,s2);

    cout << result << '\n';
}
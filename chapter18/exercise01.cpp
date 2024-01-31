/*
    Write a function, char* strdup(const char*), that copies a C-style string into memory it allocates on the free store. Do not use any standard library functions.
    Do not use subscripting; use the dereference operator * instead.
*/

#include "../std_lib_facilities.h"


int str_size(const char* ch) {

    int count = 0;
    while (*ch != '\0') {
        ++count;
        ++ch;
    }
    return count + 1;
}


char* strdup(const char* ch) {

    int size = str_size(ch);
    char* p = new char[size];
    char* original_p = p;

    while(*ch != '\0') {
        *p = *ch;
        ++ch;
        ++p;
    }

    *p = '\0';
    return original_p;
}


int main() {

    const char str1[] {"Allocate me like one of your french strings!"};
    char* str2 = strdup(str1);
    char* str3 = str2;

    while(*str2 != '\0') {
        cout << *str2;
        ++str2;
    }
    cout << endl;
    delete[] str3;
    return 0;
}
/*
    Write a function, char *strdup(const char*), that copies a C-style string into memory it allocates on the free store. Do not use any standard library functions.
*/

#include "../std_lib_facilities.h"


int sizeof_string(const char *s) {
    
    int i = 0;
    while(s[i]) {
        i++;
    }
    return i + 1;
}


char *strdup(const char *s) {

    int i = 0;
    int n = sizeof_string(s);
    char *ss = new char[n];

    for(i = 0; i < n; i++) {
        ss[i] = s[i];
    }

    return ss;
}


void print_array(char *s) {
    
    int n = sizeof_string(s);
    for(int i = 0; i < n; i++) {
        cout << s[i];
    }
    cout << endl;
}

int main() {

    char my_string[] = "Allocate, allocate, allocate!";
    char *s = my_string;
    char *ss = strdup(s);

    print_array(s);
    print_array(ss);
    
    return 0;
}
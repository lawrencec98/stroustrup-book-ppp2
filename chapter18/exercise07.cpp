/*
    Write versions of the cat_dot() from previous exercises to take C-style strings as arguments and return a free-store allocated C-style string as the result.
    Do not use standard library functions or types in the implementation. Test these functions with several strings. Be sure to free (using delete) all the memory
    you allocated from free store (using new).
*/

#include <string>
#include <iostream>


int str_len(const char* s1) {

    int count = 0;
    while(*s1 != '\0') {
        ++s1;
        ++count;
    }
    return count;
}


char* cat_dot(const char* s1, const char* s2) {
    
    int size_s1 = str_len(s1);
    int size_s2 = str_len(s2);

    char* new_string = new char[size_s1 + size_s2 + 2];

    for(int i = 0; i < size_s1; i++) {
        new_string[i] = s1[i]; 
    }

    new_string[size_s1] = '.';

    for(int i = 0; i < size_s2; i++) {
        new_string[size_s1 + 1 + i] = s2[i];
    }

    new_string[size_s1 + size_s2 + 1] = '\0';

    return new_string;
}


int main() {

    const char s1[] = {"James"};
    const char s2[] = {"Bond"};

    char* s3 = cat_dot(s1,s2);
    char* copy_of_s3 = s3;
    
    while(*s3 != '\0') {
        std::cout << *s3;
        s3++;
    }
    std::cout << std::endl;

    delete[] copy_of_s3;
    return 0;
}
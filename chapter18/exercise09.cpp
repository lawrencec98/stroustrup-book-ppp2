/*
    Consider the memory layout in §17.4. Write a program that tells the order in which static storage, the stack, and the free store are laid out in memory.
    In which direction does the stack grow; upward toward higher addresses or downward toward lower addresses? In an array on the free store, are elements
    with higher indices allocated at higher or lower addresses?

        Memory layout:
            -------------
            |   Code    |
            -------------
            |Static Data|
            -------------
            |           |
            |Free store |
            |           |
            -------------
            |   Stack   |
            -------------
*/

#include <string>
#include <iostream>


void check_heap() {

    char* array1 = new char[3] {'a','b','c'};

    std::cout << "Heap memory allocation: ";

    for(int i = 0; i < 3; i++) {
        std::cout << static_cast<void*>(array1) << ' ';
        ++array1;
    }
}


void check_stack() {

    char array2[3] {'d', 'e', 'f'};
    char* p = &array2[0];

    std::cout << "Stack memory allocation: ";

    for(int i = 0; i < 3; i++) {
        std::cout << static_cast<void*>(p) << ' ';
        ++p;
    }
}


int main() {

    check_heap();
    std::cout << std::endl;
    check_stack();
    std::cout << std::endl;

    return 0;
}
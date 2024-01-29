/*
    Allocate an array of ten ints on the free store; initialize it with the values 100, 101, 102, etc.; and print out its values.
*/

#include "../std_lib_facilities.h"


int main() {
    int *array_ten = new int[10] {100,101,102,103,104,105,106,107,108,109};

    for(int i = 0; i < 10; i++) {
        cout << array_ten[i] << ' ';
    }
    cout << endl;
    delete[] array_ten;
}
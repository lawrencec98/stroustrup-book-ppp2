/*
    First allocate an array of ten ints; initialize it to 1,2,4,8,etc; and assign its address to a variable p1.
    Second allocate an array of ten ints; and assign its address to a variable p2.
    Copy the values from the array pointed to by p1 into the array pointed to by p2.
*/

#include "../std_lib_facilities.h"
#define array_size 10

void print_array(ostream &os, int *a, int n) {

    for(int i = 0; i < n; i++) {
        os << a[i] << ' ';
    }
    os << endl;
}


int main() {

    int *p1 = new int[array_size] {1,2,4,8,16,32,64,128,256,512};
    int *p2 = new int[array_size];

    cout << "p1 before: ";
    print_array(cout, p1, array_size);
    cout << endl;

    cout << "p2 before: ";
    print_array(cout, p2, array_size);
    cout << endl;

    // We've initialized two arrays of size ten, and printed their initial values.
    // Now we will copy the values of p1 into p2.

    for (int i = 0; i < array_size; i++) {
        p2[i] = p1[i];
    }

    // Print out new values of p1 and p2 arrays.

    cout << "p1 after: ";
    print_array(cout, p1, array_size);
    cout << endl;

    cout << "p2 after: ";
    print_array(cout, p2, array_size);
    cout << endl;

    delete[] p1;
    delete[] p2;
    return 0;

}
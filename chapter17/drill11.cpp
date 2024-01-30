/*
    Using print_array() from drill07: Allocate an int, initialize it to 7, and assign its address to a variable p1. Then print out the value of p1 and of the int it 
    points to.
*/

#include "../std_lib_facilities.h"


void print_array(ostream &os, int *a, int n) {

    for(int i = 0; i < n; i++) {
        os << a[i] << ' ';
    }
    os << endl;
}


int main() {

    int my_int = 8;
    int *p1 = &my_int;

    cout << "the value of my_int: " << my_int << '\n';
    cout << "the value of p1: ";
    print_array(cout, p1, 1);
    
    return 0;
}
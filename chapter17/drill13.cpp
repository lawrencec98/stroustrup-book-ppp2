/*
    Using print_array() from drill07: Allocate an array of seven ints; initialize it to 1,2,4,8,etc.; and assign its address to a variable p2. Print out the value of
    p2 and of the array it points to.
*/

#include "../std_lib_facilities.h"


void print_array(ostream &os, int *a, int n) {

    for(int i = 0; i < n; i++) {
        os << a[i] << ' ';
    }
    os << endl;
}


int main() {

    int *array_seven = new int[7] {1,2,4,8,16,32,64};
    int *p2 = array_seven;

    cout << "address of array_seven: " << array_seven << '\n';

    cout << "value of array_seven: ";
    print_array(cout, array_seven, 7);

    cout << "address of p2: " << p2 << '\n';

    cout << "dereferenced value of p2: " << *p2 << '\n';

    cout << "value of p2 array: ";
    print_array(cout, p2, 7);

    return 0;
}
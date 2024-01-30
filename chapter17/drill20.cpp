/*
    Allocate an array of ten ints; initialize it to 1,2,4,8,etc.; and assign its address to a variable p1.
*/

#include "../std_lib_facilities.h"


int main() {

    int *array_ten = new int[10] {1,2,4,8,16,32,64,128,256,512};
    int *p1 = array_ten;

    cout << "printing out array_ten: " << '\n';
    for(int i = 0; i < 10; i++) {
        cout << array_ten[i] << ' ';
    }
    cout << endl;

    cout << "printing out p1: " << '\n';
    for (int i = 0; i < 10; i++) {
        cout << p1[i] << ' ';
    }
    cout << endl;

    return 0;
}
/*
    Allocate an array of ten ints on the free store using new.
*/

#include "../std_lib_facilities.h"

int main() {
    int *array_ints = new int[] {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < 10; i++) {
        cout << array_ints[i] << ' ';
    }
    cout << '\n';
}
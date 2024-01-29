/*
    Write a function print_array(ostream &os, int *a, int n) that prints out the values of a (assumed to have n elements) to os.
*/

#include "../std_lib_facilities.h"
#define ofilename "drill07_output.txt"

void print_array(ostream &os, int *a, int n) {

    for(int i = 0; i < n; i++) {
        os << a[i] << ' ';
    }
    os << endl;
}


int main() {
    int n = 5;
    int *a = new int[n];

    ofstream ost {ofilename};
    print_array(ost, a, n);
    return 0;
}
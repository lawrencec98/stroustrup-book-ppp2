/*
    Write a function print_array10(ostream &os, int *a) that prints out the values of a (assumed to have ten elements) to os.
*/

#include "../std_lib_facilities.h"
#define ofilename "drill04_output.txt"
#define size_a 10

void print_array10(ostream &os, int *a) {

    for(int i = 0; i < size_a; i++) {
        os << a[i] << ' ';
    }
}


int main() {
    int *a = new int[10] {2,4,6,8,10,12,14,16,18,20};
    ofstream ost {ofilename};

    print_array10(ost, a);
    return 0;
}
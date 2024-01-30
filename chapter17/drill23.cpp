/*
    First allocate a vector v1 of ten ints; initialize it to 1,2,4,8,etc.
    Second allocate another vector v2 of ten ints.
    Copy the values from vector v1 into v2.
*/

#include "../std_lib_facilities.h"


void print_vector(vector<int> vs) {
    
    int size = vs.size();
    for(int i = 0; i < size; i++) {
        cout << vs[i] << ' ';
    }
    cout << endl;
}

int main() {

    vector<int>v1 {1,2,4,8,16,32,64,128,256,512};
    vector<int>v2;

    cout << "v1 before: ";
    print_vector(v1);

    cout << "v2 before: ";
    print_vector(v2);

    // copy contents of v1 into v2
    v2 = v1;

    cout << "v1 before: ";
    print_vector(v1);

    cout << "v2 before: ";
    print_vector(v2);

    return 0;
}
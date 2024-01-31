/*
    1. Define a global vector<int>gv; initialize it with ten ints 1,2,4,8,16,etc.
    2. Define a function f() taking a vector<int> argument.
    3. In f():
        a. Define a local vector<int>lv with the same number of elements as the argument vector.
        b. Copy the values from gv into lv.
        c. Print out the elements of lv.
        d. Define a local vector<int>lv2; intialize it to be a copy of the argument vector.
        e. Print out the elements of lv2.
    4. In main():
        a. Call f() with gv as its argument.
        b. Define a vector<int> vv, and initialize it with the first ten factorial values.
        c. Call f() with vv as its argument.
*/

#include "../std_lib_facilities.h"


vector<int>gv {1,2,4,8,16,32,64,128,256,512};


void print_vector(const vector<int> my_vector) {

    int size = my_vector.size();
    for(int i = 0; i < size; i++) {
        cout << my_vector[i] << ' ';
    }
    cout << endl;
}


int factorial(int val) {

    if (val == 0) return 1;

    return val * factorial(val-1);
}


void f(const vector<int> vec) {

    vector<int>lv(vec.size());
    lv = gv;
    print_vector(lv);

    vector<int>lv2(vec.begin(), vec.end());
    print_vector(lv2);
}


int main() {

    f(gv);

    vector<int>vv;
    for(int i = 0; i < 10; i++) {
        vv.push_back(factorial(i+1));
    }

    f(vv);
}
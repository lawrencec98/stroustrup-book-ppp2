/*
    1. Define a global int array ga of ten ints initialized to 1,2,4,8,16,etc.
    2. Define a function f() taking an int array argument and an int argument indicating the number of elements in the array.
    3. In f():
        a. Define a local int array la of ten ints.
        b. Copy the values from ga into la.
        c. Print out the elements of la.
        d. Define a pointer p to int and initialize it with an array allocated on the free store with the same number of elements as the argument array.
        e. Copy the values from the argument array into the free-store array.
        f. Print out the elements of the free-store array.
        g. Deallocate the free-store array.
    4. In main():
        a. Call f() with ga as its argument.
        b. Define an array aa with ten elements, and initialize it with the first ten factorial values (1, 2*1, 3*2*1, etc.).
        c. Call f() with aa as its argument.
*/

#include "../std_lib_facilities.h"


//global int array 'ga'
int ga[10] {1,2,4,8,16,32,64,128,256,512};


void print_array(const int arr[], int n) {

    for(int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}


void f(const int my_array[], int n) {

    int la[10];
    for (int i = 0; i < n; i++) {
        la[i] = ga[i];
    }

    cout << "la: ";
    print_array(la,10);
    cout << endl;

    int *p = new int[n];
    for (int i = 0; i < n; i++) {
        p[i] = my_array[i];
    }

    cout << "p: ";
    print_array(p,n);
    cout << endl;

    delete[] p;
}


int factorial(int val) {

    if (val == 0) return 1;

    return val * factorial(val-1);
}


int main() {
    
    f(ga, 10);

    int aa[10];
    for (int i = 0; i < 10; i++) {
        aa[i] = factorial(i + 1);
    }

    f(aa,10);

    return 0;
}
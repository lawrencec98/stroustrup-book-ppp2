/*
    Replace Name_pair::print() with a (global) operator << and define == and != for Name_pairs.
*/

#include "../std_lib_facilities.h"
#include "exercise03.h"


int main() {

    Name_pairs group1;
    group1.read_names();
    group1.read_ages();

    Name_pairs group2;
    group2.read_names();
    group2.read_ages();

    if (group1 == group2) {
        cout << "group1 == group2" << '\n';
    }
    else {
        cout << "group1 != group2" << '\n';
    }

    cout << "group1 is:" << '\n' << group1;

}
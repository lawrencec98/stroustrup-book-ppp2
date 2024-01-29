/*
    Do drill 7 using a vector instead of an array and a print_vector() instead of print_array().
*/

#include "../std_lib_facilities.h"
#define ofilename "drill10_output.txt"

void print_vector(ostream &os, const vector<int> my_vector) {

    int size = my_vector.size();
    for(int i = 0; i < size; i++) {
        os << my_vector[i] << ' ';
    }
    os << endl;
}


int main() {
    
    vector<int> my_vector {1,2,3,4,5,6,7,8,9,10};
    ofstream ost {ofilename};
    print_vector(ost, my_vector);
}
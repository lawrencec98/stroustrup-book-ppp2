/*
    Write two functions that reverse the order of elements in a vector<int>. The first reverse function should produce a new vector with the reversed sequence,
    leaving its original vector unchanged.
    The other reverse function should reverse the elements of its vector without using any other vectors (hint: swap).
*/
#include "../std_lib_facilities.h"


vector<int> reverse_vector1(const vector<int> original_vector) {
    vector<int> reversed1;

    for (int i = original_vector.size() - 1; i >= 0; i--) {
        int value = original_vector[i];
        reversed1.push_back(value);
    }

    return reversed1;
}


void reverse_vector2(vector<int> &original_vector) {
    int last = original_vector.size() - 1;

    for (int i = 0; i < last / 2; i++) {
        swap(original_vector[i], original_vector[last-i]);
    }
}


int main() {

    vector<int> original_vector;
    int input_value;
    cout << "Please enter your vector values to be reversed: ";
    while (cin >> input_value) {
        original_vector.push_back(input_value);
    }

    // cout << "Using reverse method 1, your reversed vector becomes: ";
    // for (auto num : reverse_vector1(original_vector)) {
    //     cout <<  num << ' ';
    // }

    cout << "Using reverse method 2, your reversed vector becomes: ";
    reverse_vector2(original_vector);
    for (auto num : original_vector) {
        cout << num << ' ';
    }
    
    cout << '\n';

}
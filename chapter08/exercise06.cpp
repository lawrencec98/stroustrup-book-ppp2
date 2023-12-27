/*
    Write versions of the functions in reverse_vector.cpp, but with a vector<string> instead.
*/

#include "../std_lib_facilities.h"


vector<string> reverse_string_vector1(const vector<string> original_vector) {
    vector<string> reversed1;

    for (int i = original_vector.size() - 1; i >= 0; i--) {
        string value = original_vector[i];
        reversed1.push_back(value);
    }

    return reversed1;
}


void reverse_string_vector2(vector<string> &original_vector) {
    int last = original_vector.size() - 1;

    for (int i = 0; i < last / 2; i++) {
        swap(original_vector[i], original_vector[last-i]);
    }
}


int main() {

    vector<string> original_vector;
    string input_value;
    cout << "Please enter your vector values to be reversed (-1 to indicate finished): ";
    while (cin >> input_value && input_value != "-1") {
        original_vector.push_back(input_value);
    }

    // cout << "Using reverse method 1, your reversed vector becomes: ";
    // for (auto num : reverse_string_vector1(original_vector)) {
    //     cout <<  num << ' ';
    // }

    cout << "Using reverse method 2, your reversed vector becomes: ";
    reverse_string_vector2(original_vector);
    for (auto num : original_vector) {
        cout << num << ' ';
    }
    
    cout << '\n';

}
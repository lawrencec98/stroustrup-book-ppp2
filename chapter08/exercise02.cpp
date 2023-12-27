#include "../std_lib_facilities.h"
#include "my.h"

void print(string label, const vector<int> &my_vector) {

    cout << label << ": ";

    for (auto value: my_vector) {
        cout << value << ' ';
    }
}

int main() {

    string exit_label = "Your vector is: ";
    vector<int> my_vector;
    cout << "Please enter your vector values:\n";
    for (int value; cin >> value;) {
        my_vector.push_back(value);
    }

    print(exit_label, my_vector);
    cout << '\n';
}
#include "../std_lib_facilities.h"

void print(string label, const vector<int> &my_vector) {

    cout << label << ": ";

    for (auto value: my_vector) {
        cout << value << ' ';
    }
}
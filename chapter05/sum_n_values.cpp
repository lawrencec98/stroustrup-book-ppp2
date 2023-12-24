#include "../std_lib_facilities.h"


int main() {

    int n = 0;
    while ( n <= 0) {
    cerr << "Please enter the number of values you want to sum (must be greater than 0): ";
    cin >> n;
    }


    cout << "Please enter some integers (Enter non-integer to stop): ";
    vector<int> integers_list;
    for (int user_input; cin >> user_input;) {
        integers_list.push_back(user_input);
    }

    // check user inputted at least n values to the list
    if (n > integers_list.size()) {
        cerr << "ERROR: not enough integers entered to sum\n";
    }


    // print out sum of first n integers in the list
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += integers_list[i]; 
    }

    cout << "The sum of the first " << n << " integers you entered is: " << sum << ".\n";
    return 0;
}
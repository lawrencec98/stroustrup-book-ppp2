#include "../std_lib_facilities.h"


int main() {

    vector<string> strings;

    cout << "Enter 5 string values:\n";
    
    for (int i = 0; i < 5; i++) {
        string input;
        cin >> input;
        strings.push_back(input);
    }

    sort(strings.begin(), strings.end());

    int middle_index = strings.size() / 2;
    string mode = strings[middle_index];
    string min = strings.front();
    string max = strings.back();

    cout << "The mode is " << mode << "\n";
    cout << "The min is " << min << "\n";
    cout << "The max is " << max << "\n";
}
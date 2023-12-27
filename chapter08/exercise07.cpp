/*
    Read five names into a vector<string> name, then prompt the user for the ages of the people named and store the ages in a vector<double> age. Then print out the five
    (name[i], age[i]) pairs. The tricky part here is to get the age vector in the correct order to match the sorted name vector. Hint: before sorting name, take a copy and 
    use that to make a copy of age in the right order after sorting name. Then, do that exercise again but allowing an arbitrary number of names.
*/

#include "../std_lib_facilities.h"

vector<string> sort_name(vector<string> name) {
    sort(name.begin(), name.end());
    return name;
}


vector<double> sort_age(vector<string> name, vector<double> age) {
    
    int last = name.size();

    for (int i = 0; i < last; ++i) {
        for (int j = 0; j < last - i - 1; j++) {
            if (name[j] > name [j + 1]) {
                swap(name[j], name[j + 1]);
                swap(age[j], age[j + 1]);
            }
        }
    }

    return age;
}


int main() {

    vector<string> names;
    string input_names;
    vector<double> ages;
    int input_ages;
    cout << "Please give me five names (Enter -1 when finished): ";
    while (cin >> input_names && input_names != "-1") {
        names.push_back(input_names);
    }

    cout << "Please give me the five corresponding ages, in order (Enter -1 when finished): ";
    while (cin >> input_ages && input_ages != -1) {
        ages.push_back(input_ages);
    }

    cout << "\tBEFORE SORTING BY NAME:\n";
    for (int i = 0; i < 5; i++) {
        cout <<  names[i] << ": " << ages[i] << '\n';
    }

    cout << "\tAFTER SORTING BY NAME:\n";
    vector<string> sorted_names = sort_name(names);
    vector<double> sorted_ages = sort_age(names, ages);
    for (int i = 0; i < 5; i++) {
        cout<< sorted_names[i] << ": " << sorted_ages[i] << '\n';
    }
}


// vector<double> sort_age(vector<double> age) {
//     ...
// }
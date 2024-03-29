/*
    Design and implement a Name_pairs class holding (name, age) pairs where name is a string and age is a double. Represent that as a vector<string> (called name), and
    a vector<double> (called age) member. Provide an input operation read_names() that reads a series of names. Provide a read_ages() operation that prompts the user
    for an age for each name. Provide a print() operation that prints out the (name[i], age[i]) pairs (one per line) in the order determined by the name vector. Provide a
    sort() operation that sorts the name vector in alphabetical order and reorganizes the age vector to match. Implement all "operations" as member functions. Test the
    class.
*/

#include "../std_lib_facilities.h"


class Name_pairs {
public:
    void read_names();  // input operation
    void read_ages();   // input operation
    void print();
    void sort();        // sorts the name vector in alphabetical order, and reorganizes age vector to match
private:
    vector<string> name;
    vector<double> age;
};


void Name_pairs::read_names() {
    cout << "Please enter a list of names (-1 when finished): ";
    string input;
    while (cin >> input && input != "-1") {
        name.push_back(input);
    }
}


void Name_pairs::read_ages() {
    double input;
    for (int i = 0; i < name.size(); i++) {
        cout << "What is " << name[i] << "'s age? ";
        cin >> input;
        age.push_back(input);
    }
}


void Name_pairs::sort() {
    
    int last = name.size();

    for (int i = 0; i < last; ++i) {
        for (int j = 0; j < last - i - 1; j++) {
            if (name[j] > name [j + 1]) {
                swap(name[j], name[j + 1]);
                swap(age[j], age[j + 1]);
            }
        }
    }
}


void Name_pairs::print() {
    for (int i = 0; i < name.size(); i++) {
        cout << name[i] << ", " << age[i] << '\n';
    }
}
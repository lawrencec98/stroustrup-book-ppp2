/*
    Replace Name_pair::print() with a (global) operator << and define == and != for Name_pairs.
*/

#include "../std_lib_facilities.h"


class Name_pairs {
public:
    void read_names();  // input operation
    void read_ages();   // input operation
    void print();
    void sort();        // sorts the name vector in alphabetical order, and reorganizes age vector to match
    const vector<string> &get_name() const {return name;}
    const vector<double> &get_age() const {return age;}
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


bool operator==(const Name_pairs &a, const Name_pairs &b) {
    return a.get_name() == b.get_name()
    && a.get_age() == b.get_age();
}


bool operator!=(const Name_pairs &a, const Name_pairs &b) {
    return !(a==b);
}


ostream &operator<<(ostream &os, const Name_pairs &thing) {
     
    for (int i = 0; i<thing.get_name().size(); ++i) {
        os << '(' << thing.get_name()[i] << ',' << thing.get_age()[i] << ')' << '\n';
    }
    return os;
}
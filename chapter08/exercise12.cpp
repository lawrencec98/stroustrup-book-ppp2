/*

    Improve print_until_s() from SECTION 8.5.2. Test it. What makes a good set of test cases? Give reasons. Then, write a print_until_ss() that prints until it sees
    a second occurence of its quit argument.

    For reference, the implementation of print_until_s() in SECTION 8.5.2 is:

        void print_until_s(vector<string> v, string quit)
        {
            for (int s: v) {
                if (s == quit) return;
                cout << s << '\n';
            }
        }
*/
#include "../std_lib_facilities.h"


void print_until_s(const vector<string> &v, const string quit) {
    
    for (string s: v) {
        if (s == quit) return;
        cout << s << '\n';
    }
}


void print_until_ss(const vector<string> &v, const string quit) {
//this version does not print the 'quit' value
    int counter = 0;
    for (string s: v) {
        if (counter >= 2) return;
        if (s == quit) counter++;
        else cout << s << '\n';
    }
}


int main() {

    string value;
    vector<string> v;
    while (cin >> value && value != "-1") {
        v.push_back(value);
    }
    print_until_ss(v,"quit");
}
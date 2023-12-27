/*
    Write a program where you first enter a set of name-and-value pairs, such as Joe 17 and Barbara 22. For each pair, add the name to a vector called names and the number
    to a vector called scores (in corresponding positions). Terminate input with NoName 0. Check that each name is unique and terminate with an error message if a name is
    entered twice. Write out all the (name,score) pairs, one per line.
*/

#include "../std_lib_facilities.h"


int main() {

    vector<string> names;
    vector<int> scores;
    string name;
    int score;

    cout << "Please enter a name and its corresponding score. When you are finished, enter 'NoName 0'. ";

    do {
    cin >> name >> score;
    int newname = 1;

    for (int i = 0; i < names.size(); i++) {
        if (names[i] == name) {
            newname = 0;
        }
    }
    if(newname = 1 && !(name == "NoName" && score == 0)) {
        names.push_back(name);
        scores.push_back(score);
    }
    }
    while (!(name == "NoName" && score == 0));

    cout << "\n" << "------------NAMES AND SCORES------------" << "\n";
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << " " << scores[i] << "\n";
    }
}